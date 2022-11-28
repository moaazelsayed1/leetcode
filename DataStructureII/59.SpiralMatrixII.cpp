class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> result(n, vector<int>(n));

    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int num = 1;

    while (left <= right && top <= bottom) {

      for (int j = left; j <= right; j++) {
        result[top][j] = num++;
      }
      top++;
      for (int i = top; i <= bottom; i++) {
        result[i][right] = num++;
      }
      right--;
      for (int j = right; j >= left; j--) {
        result[bottom][j] = num++;
      }
      bottom--;
      for (int i = bottom; i >= top; i--) {
        result[i][left] = num++;
      }
      left++;
    }
    return result;
  }
};
