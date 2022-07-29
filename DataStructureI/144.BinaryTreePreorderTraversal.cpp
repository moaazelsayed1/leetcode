//	4 ms ,	8.3 MB
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
    
    void traverse(TreeNode* node, vector<int>& vec){
        if(node == nullptr){
            return;
        }
        
        vec.push_back(node->val);
        traverse(node->left, vec);
        traverse(node->right, vec);
        
         
        
    }
    
     
};

