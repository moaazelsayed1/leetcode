// 11 ms, 10.5 MB
class Solution {
public:
  void helper(string &s, int index, vector<string> &ans) {

    if (index == s.size()) {
      ans.push_back(s);
      return;
    }
    helper(s, index + 1, ans);

    if (isalpha(s[index])) {

      if (islower(s[index])) {
        s[index] = toupper(s[index]);
        helper(s, index + 1, ans);
        s[index] = tolower(s[index]);
      } else {
        s[index] = tolower(s[index]) helper(s, index + 1, ans);
        s[index] = toupper(s[index])
      }
    }
  }

  vector<string> letterCasePermutation(string s) {
    vector<string> ans;
    helper(s, 0, ans);
    return ans;
  }
};
