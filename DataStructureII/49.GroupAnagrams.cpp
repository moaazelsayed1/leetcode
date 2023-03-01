class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {

    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;

    for (auto str : strs) {
      string strtmp = str;
      sort(str.begin(), str.end());
      mp[str].push_back(strtmp);
    }

    for (auto kvp : mp) {
      ans.push_back(kvp.second);
    }
    return ans;
  }
};
