// 	16 ms	21.7 MB
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  bool isValidBST(TreeNode *root) { return validate(root, nullptr, nullptr); }

  bool validate(TreeNode *root, TreeNode *low, TreeNode *high) {
    if (root == nullptr) {
      return true;
    }

    if ((low != nullptr && root->val <= low->val) ||
        (high != nullptr && root->val >= high->val)) {
      return false;
    }

    return validate(root->right, root, high) && validate(root->left, low, root);
  }
};
