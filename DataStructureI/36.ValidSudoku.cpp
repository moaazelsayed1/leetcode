// 	32 ms, 	20.4 MB
class Solution {
public:
  const int N = 9;
  bool isValidSudoku(vector<vector<char>> &board) {
    vector<set<char>> row(N);
    vector<set<char>> col(N);
    vector<set<char>> box(N);

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (board[i][j] == '.')
          continue;

        int num = board[i][j];
        int box_index = (i / (N/3)) * (N/3) + (j / (N/3));
        if (row[i].count(num) || col[j].count(num) || box[box_index].count(num))
          return false;
        row[i].insert(num);
        col[j].insert(num);
        box[box_index].insert(num);
      }
    }
    return true;
  }
};


