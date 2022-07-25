// 	4 ms, 	10.6 MB
class Solution {
public:
  int firstUniqChar(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[26] = {0};

    for (char c : s)
      arr[c - 'a']++;

    for (int i = 0; i < s.length(); i++) {
      if (arr[s[i] - 'a'] == 1)
        return i;
    }

    return -1;
  }
};
