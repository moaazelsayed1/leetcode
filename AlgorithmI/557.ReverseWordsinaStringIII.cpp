// 	24 ms, 	9.6 MB
class Solution {
public:
  string reverseWords(string s) {
    int i = 0, j = 0;

    while (i < s.size()) {
      if (s[j] == ' ' || j == s.size()) {
        reverse(s.begin() + i, s.begin() + j);
        i = j;
        i++;
      }
      j++;
    }
    return s;
  }
};
