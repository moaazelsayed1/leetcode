// 	12 ms, 	9.4 MB
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(biSearch(matrix, target)){
            return true;
        }
        return false;
    }
   bool biSearch(const vector<vector<int>>& arr, int target)
    {
    int row = 0;
    int col = arr[row].size() - 1;
    while (row < arr.size() && col >= 0) {
        if (arr[row][col] == target) {
            return true;
        }
 
        if (arr[row][col] < target) {
            row++;
        }
        else {
            col--;
        }
    }
    return false;
}
};
