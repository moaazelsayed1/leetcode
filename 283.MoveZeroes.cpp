// 	26 ms,  19.3 MB
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    init();
    int i = 0, j = 0;
    while (j < nums.size()) {
      if (nums[j]) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
        i++;
      }
      j++;
    }
  }
  void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
  }
};
