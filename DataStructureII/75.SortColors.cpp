// 0 ms	8.2 MB
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int arr[3] = {0};

    for (int i = 0; i < nums.size(); i++) {
      arr[nums[i]]++;
    }

    int startIndex[3];
    startIndex[0] = 0;
    startIndex[1] = arr[0];
    startIndex[2] = arr[1] + arr[0];

    for (int i = 0; i < 3; i++) {
      int j = 0;
      while (arr[i]--) {
        nums[startIndex[i] + j] = i;
        j++;
      }
    }
  }
};
