// iterative in order
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> inorder;
        TreeNode* node = root;

        // run while nodes still exist to process
        while(node != NULL || !st.empty()) {
            
            // go to extreme left
            while(node != NULL) {
                st.push(node);
                node = node->left;
            }

            // process node
            node = st.top();
            st.pop();
            inorder.push_back(node->val);

            // move to right subtree
            node = node->right;
        }

        return inorder;
    }
};
