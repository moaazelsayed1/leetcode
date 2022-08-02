// 	3 ms, 7.9 MB
class Solution {
public:
  int rob(vector<int> &nums) {
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    return dpSolve(nums, dp, 0);
  }

  int dpSolve(const vector<int> &nums, vector<int> &dp, int index) {

    int n = nums.size();
    if (index >= n) {
      return 0;
    }
    if (index == n - 1) {
      return nums[index];
    }
    if (dp[index] != -1) {
      return dp[index];
    }

    dp[index] = max(nums[index] + dpSolve(nums, dp, index + 2),
                    dpSolve(nums, dp, index + 1));

    return dp[index];
  }
};
