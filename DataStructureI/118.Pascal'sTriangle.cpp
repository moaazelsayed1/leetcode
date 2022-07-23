//	6 ms, 6.5 MB
class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans{
        {1},
    };
    if (numRows == 1) {
      return ans;
    } else {
      ans.push_back({1, 1});
      for (int i = 0; i < numRows - 2; i++) {
        vector<int> res(ans.back().size() + 1);
        res[0] = 1;
        res[ans.back().size()] = 1;
        for (int i = 1; i < ans.back().size(); i++) {
          res[i] = ans.back()[i - 1] + ans.back()[i];
        }
        ans.push_back(res);
      }
    }
    return ans;
  }
};
