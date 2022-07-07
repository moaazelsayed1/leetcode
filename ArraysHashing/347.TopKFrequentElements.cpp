class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> mp;

    for (auto num : nums) {
      mp[num]++;
    }

    vector<pair<int, int>> vec;

    for (auto m : mp) {
      vec.push_back(m);
    }

    sort(vec.begin(), vec.end(), cmp);

    vector<int> ans;

    for (int i = 0; i < k; i++) {
      ans.push_back(vec[i].first);
    }
    return ans;
  }

private:
  static bool cmp(pair<int, int> x, pair<int, int> y) {
    return x.second > y.second;
  }
};
