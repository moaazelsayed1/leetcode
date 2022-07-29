// 	4 ms, 	8.4 MB
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverseInorder(root, ans);
        return ans;
        
    }
    
     
    void traverseInorder(TreeNode* node, vector<int>& vec){
        if(node == nullptr){
            return;
        }
        traverseInorder(node->left, vec);
        vec.push_back(node->val);
        traverseInorder(node->right, vec);
}
    
};
