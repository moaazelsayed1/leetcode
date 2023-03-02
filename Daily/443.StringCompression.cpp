class Solution {
public:
  int compress(vector<char> &chars) {
    if (chars.size() == 0) {
      return 0;
    }
    int start = 0, end = 1, last = 0;
    while (start < chars.size() && end <= chars.size()) {
      while (end < chars.size() && chars[end] == chars[start]) {
        end++;
      }
      if (end - start > 1) {
        std::string len_str = std::to_string(end - start);
        chars[last] = chars[start];
        int i = last + 1;
        for (int j = 0; j < len_str.size(); j++) {
          chars[i] = len_str[j];
          i++;
          last = i;
        }
      } else {
        chars[last] = chars[start];

        last++;
      }
      start = end;
      end++;
    }
    if (last < chars.size() - 1) {
      chars.resize(last);
    }
    return last;
  }
};
