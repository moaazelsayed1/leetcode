class Solution {
public:
  int check(string &s, int L, int R) {
    while (L >= 0 and R < s.length() and s[L] == s[R]) {
      L--;
      R++;
    }
    return R - L - 1;
  }

  string longestPalindrome(string s) {

    int ans = 0, start = 0;

    for (int i = 0; i < s.length(); i++) {
      int len1 = check(s, i, i);
      int len2 = check(s, i, i + 1);

      int len = max(len1, len2);

      if (len > ans) {
        ans = len;
        start = i - (ans - 1) / 2;
      }
      cout << start << endl;
    }
    cout << ans << endl;
    return s.substr(start, ans);
  }
};
