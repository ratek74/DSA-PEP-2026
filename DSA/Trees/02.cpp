#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void postOrder(Node* root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

}

int countNodes(Node* root){
    // base case
    if(root == NULL) return 0;
    // count Node in leftSubtree
  int x =  countNodes(root->left);
  // count Node in rightSubtree
  int y =  countNodes(root->right);
  return x + y + 1;
}

int leafNodes(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    int x = leafNodes( root->lefts);
    int y = leafNodes(root->right);

    return x + y ;
}
int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left = new Node(4);
  root->left->right = new Node(5);

  root->right->left = new Node(6);
  root->right->right = new Node(7);
}