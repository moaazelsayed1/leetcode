// 	25 ms, 	15.6 MB
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    vector<int> ans(2);
    ans[0] = 1;
    ans[1] = numbers.size();

    while (ans[0] < ans[1]) {
      if (numbers[ans[0] - 1] + numbers[ans[1] - 1] == target) {
        break;
      } else if (numbers[ans[0] - 1] + numbers[ans[1] - 1] > target) {
        ans[1]--;
      } else {
        ans[0]++;
      }
    }
    return ans;
  }
};
