// 24 ms, 13.3 MB
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> mp;
    int i = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {
      mp[*it] = i + 1;
      i++;
    }
    vector<int> v;
    i = 1;

    for (auto it = nums.begin(); it != nums.end(); it++) {
      if (mp[target - *it] && mp[target - *it] != i) {
        v.push_back(i - 1);
        v.push_back(mp[target - *it] - 1);
        break;
      }
      i++;
    }

    return v;
  }
};
