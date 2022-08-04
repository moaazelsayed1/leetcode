// 	11 ms,	17 MB
class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int ans = 0;

    for (int num : nums) {
      ans ^= num;
    }

    return ans;
  }
};
