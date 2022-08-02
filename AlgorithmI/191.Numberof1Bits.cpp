//	3 ms	5.9 MB
class Solution {
public:
  int hammingWeight(uint32_t n) { return __builtin_popcount(n); }
};
