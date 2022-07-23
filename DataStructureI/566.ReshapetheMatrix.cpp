// 4 ms, 11.3 MB
class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
    vector<vector<int>> res(r, vector<int>(c));
    if (mat.size() == 0 || r * c != mat.size() * mat[0].size())
      return mat;
    int row_count = 0;
    int column_count = 0;
    for (int i = 0; i < mat.size(); i++) {
      for (int j = 0; j < mat[0].size(); j++) {
        res[row_count][column_count] = mat[i][j];
        column_count++;
        if (column_count == c) {
          row_count++;
          column_count = 0;
        }
      }
    }
    return res;
  }
};
