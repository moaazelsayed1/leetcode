class Solution {
public:
  int strStr(string haystack, string needle) {
    int i = 0;
    if (haystack.length() < needle.length()) {
      return -1;
    }
    if (haystack == needle) {
      return 0;
    }

    while (i < haystack.size() - needle.size() + 1) {
      if (haystack.substr(i, needle.size()) == needle) {
        return i;
      }
      i++;
    }
    return -1;
  }
};
