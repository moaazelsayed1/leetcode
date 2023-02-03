class Solution {
public:
  bool wordPattern(string pattern, string s) {
    unordered_map<char, int> patterntoInt;
    unordered_map<string, int> wordtoInt;

    istringstream in(s);
    string word;
    int i = 0, n = pattern.size();

    for (word; in >> word; i++) {
      if (i == n || patterntoInt[pattern[i]] != wordtoInt[word]) {
        return false;
      }
      patterntoInt[pattern[i]] = wordtoInt[word] = i + 1;
    }
    return i == n;
  }
};
