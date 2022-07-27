// 	19 ms, 	14 MB
class Solution {
public:
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int color) {
    int curColor = image[sr][sc];
    if (curColor == color) {
      return image;
    }
    DFS(image, sr, sc, color, curColor);
    return image;
  }

  void DFS(vector<vector<int>> &image, int sr, int sc, int color,
           int curColor) {
    image[sr][sc] = color;

    if (isValid(image, sr + 1, sc, curColor)) {
      DFS(image, sr + 1, sc, color, curColor);
    }
    if (isValid(image, sr, sc + 1, curColor)) {
      DFS(image, sr, sc + 1, color, curColor);
    }
    if (isValid(image, sr - 1, sc, curColor)) {
      DFS(image, sr - 1, sc, color, curColor);
    }
    if (isValid(image, sr, sc - 1, curColor)) {
      DFS(image, sr, sc - 1, color, curColor);
    }
  }

  bool isValid(vector<vector<int>> &image, int i, int j, int curColor) {
    if (i >= 0 && i < image.size() && j >= 0 && j < image[0].size() &&
        image[i][j] == curColor) {
      return true;
    }
    return false;
  }
};
