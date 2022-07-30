// 9 ms, 12.6 MB
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> ans;
    if (root == nullptr) {
      return ans;
    }

    BFS(root, ans);
    return ans;
  }

  void BFS(TreeNode *node, vector<vector<int>> &ans) {
    queue<TreeNode *> q;
    q.push(node);

    while (!q.empty()) {
      vector<int> vec;
      int size = q.size();
      for (int i = 0; i < size; i++) {
        TreeNode *cur = q.front();
        q.pop();
        if (cur->left) {
          q.push(cur->left);
        }
        if (cur->right) {
          q.push(cur->right);
        }

        vec.push_back(cur->val);
      }
      ans.push_back(vec);
    }
  }
};
