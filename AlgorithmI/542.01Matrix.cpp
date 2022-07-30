// 102 ms, 30.1 MB
class Solution {
public:
  vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
    return BFS(mat);
  }

  vector<vector<int>> BFS(const vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> dis(n, vector<int>(m, n * m));
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (mat[i][j] == 0) {
          dis[i][j] = 0;
          q.emplace(i, j);
        }
      }
    }

    while (!q.empty()) {
      int i = q.front().first;
      int j = q.front().second;
      int ds = dis[i][j];
      q.pop();

      for (int k = 0; k < 4; k++) {
        int newi = diri[k] + i;
        int newj = dirj[k] + j;
        if (validate(newi, newj, n, m) && dis[newi][newj] > ds + 1) {
          dis[newi][newj] = ds + 1;
          q.emplace(newi, newj);
        }
      }
    }
    return dis;
  }

  bool validate(int i, int j, int n, int m) {
    if (i < 0 || i >= n || j < 0 || j >= m) {
      return false;
    }
    return true;
  }

private:
  int ans = 0;
  const int diri[4] = {1, 0, -1, 0};
  const int dirj[4] = {0, -1, 0, 1};
};
