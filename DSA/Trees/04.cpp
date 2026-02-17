// kth smallest element in a binary tree
class Solution {
public:
    void inOrder(TreeNode* root, vector<int>& ans){
        if (root == NULL) return;
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inOrder(root, ans);
        return ans[k-1];
    
        }
    
};

// minimum in bst
class Solution {
  public:
    int minValue(Node* root) {
       
    if (root == NULL) return -1;  
    
    if (root->left == NULL)
        return root->data;

    minValue(root->left);
}
        
    
};