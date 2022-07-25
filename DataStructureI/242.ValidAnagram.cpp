//   0 ms, 	7.1 MB
class Solution {
public:
  bool isAnagram(string s, string t) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sarr[26] = {0};
    int tarr[26] = {0};

    for (int i = 0; i < s.size(); i++) {
      sarr[s[i] - 'a']++;
    }
    for (int i = 0; i < t.size(); i++) {
      tarr[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
      if (sarr[i] != tarr[i]) {
        return false;
      }
    }
    return true;
  }
};
