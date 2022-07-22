// 	119 ms, 	93.5 MB
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    init();
    int mn = INT_MAX, mx = INT_MIN;
    int mn_idx = 0, mx_idx = 0;
    int ans = 0;

    for (int i = 0; i < prices.size(); i++) {
      if (prices[i] < mn) {
        mn = prices[i];
        mn_idx = i;
      }
      if (prices[i] > mx) {
        mx = prices[i];
        mx_idx = i;
      }
      if (mx_idx <= mn_idx) {
        // ans = 0;
        mx = mn;
        mx_idx = mn_idx;
      } else {
        if (mx - mn > ans) {
          ans = mx - mn;
        }
      }
      // cout << ans << endl;
    }
    return ans;
  }
  void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
  }
};
