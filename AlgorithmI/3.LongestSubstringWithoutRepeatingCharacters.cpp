// 	35 ms, 	10.8 MB
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<char, int> mp;
    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < s.size()) {
      while (mp.count(s[i])) {
        mp.erase(s[j]);
        j++;
      }
      mp[s[i]]++;
      i++;
      ans = max(ans, i - j);
    }

    return ans;
  }
};
