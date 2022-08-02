//	0 ms	5.8 MB
class Solution {
public:
  bool isPowerOfTwo(int n) {
    if (n <= 0)
      return false;
    return ((n & (n - 1)) == 0);
  }
};
