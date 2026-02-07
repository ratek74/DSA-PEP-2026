//LRC PROBLEM
class LRUCache {
public:
    class Node {
    public:
        int key;
        int value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = next = NULL;
        }
    };

    unordered_map<int, Node*> cache;
    int cap;
    Node* head;
    Node* tail;

    // Add node right after head
    void addToFront(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    // Remove a node from DLL
    void removeNode(Node* node) {
        Node* left = node->prev;
        Node* right = node->next;

        left->next = right;
        right->prev = left;
    }

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (cache.find(key) == cache.end()) {
            return -1;
        }

        Node* node = cache[key];
        removeNode(node);
        addToFront(node);

        return node->value;
    }

    void put(int key, int value) {
        // If key exists
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            removeNode(node);
            addToFront(node);
            return;
        }

        // If cache is full
        if (cache.size() == cap) {
            Node* lru = tail->prev;
            cache.erase(lru->key);
            removeNode(lru);
            delete lru;
        }

        // Insert new node
        Node* newNode = new Node(key, value);
        cache[key] = newNode;
        addToFront(newNode);
    }
};