// 8 ms	, 13.3 MB
class Solution {
public:
  int orangesRotting(vector<vector<int>> &grid) {

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> time(n, vector<int>(m, 1e8));

    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 2) {
          q.push({i, j});
          time[i][j] = 0;
        }
      }
    }

    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, 1, -1, 0};

    while (q.size()) {

      auto [x, y] = q.front();
      q.pop();

      for (int i = 0; i < 4; i++) {

        int newx = dx[i] + x;
        int newy = dy[i] + y;

        if (newx < 0 or newy < 0 or newx >= n or newy >= m or
            grid[newx][newy] == 0)
          continue;

        if (time[newx][newy] > (1 + time[x][y])) {
          time[newx][newy] = 1 + time[x][y];
          q.push({newx, newy});
        }
      }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1) {
          if (time[i][j] == (1e8))
            return -1;
          ans = max(ans, time[i][j]);
        }
      }
    }
    return ans;
  }
};
