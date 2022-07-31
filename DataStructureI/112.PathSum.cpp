//7 ms, 	21.4 MB
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
  bool hasPathSum(TreeNode *root, int target) {
    DFS(root, target, 0);
    return ans;
  }
  void DFS(TreeNode *root, int target, int sum) {
    if (root == nullptr)
      return;
    if (root->right == nullptr && root->left == nullptr) {
      sum += root->val;
      if (sum == target)
        ans = true;
      return;
    }
    sum += root->val;
    DFS(root->left, target, sum);
    DFS(root->right, target, sum);
  }
private:
      bool ans = false;
};

