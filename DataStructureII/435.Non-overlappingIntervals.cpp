class Solution {
public:
  int eraseOverlapIntervals(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());
    int ans = 0;
    int j = 0, i = 1;
    while (i < intervals.size()) {
      if (intervals[j][1] > intervals[i][0]) {
        ans++;
        if (intervals[j][1] >= intervals[i][1]) {
          j = i;
        }
      } else {
        j = i;
      }
      i++;
    }
    return ans;
  }
};
