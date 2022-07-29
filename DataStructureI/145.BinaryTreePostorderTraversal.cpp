// 	3 ms, 	8.6 MB
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversePostorder(root, ans);
        return ans;
        
    }
    
     
    void traversePostorder(TreeNode* node, vector<int>& vec){
        if(node == nullptr){
            return;
        }

        traversePostorder(node->left, vec);
        traversePostorder(node->right, vec);
        vec.push_back(node->val);
        
}
    
};
