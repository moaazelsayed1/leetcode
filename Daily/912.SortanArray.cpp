class Solution {
public:
  vector<int> sortArray(vector<int> &nums) {
    if (nums.empty()) {
      return nums;
    }
    countingSort(nums);
    return nums;
  }

  void countingSort(vector<int> &arr) {
    int maxVal = *max_element(arr.begin(), arr.end());

    vector<int> count(maxVal + 1);

    for (int i = 0; i < arr.size(); i++) {
      count[arr[i]]++;
    }

    for (int i = 1; i < count.size(); i++) {
      count[i] += count[i - 1];
    }

    int j = 0;
    for (int i = 0; i <= maxVal; i++) {
      while (count[i] > 0) {
        arr[j] = i;
        j++;
        count[i]--;
      }
    }
  }
};
