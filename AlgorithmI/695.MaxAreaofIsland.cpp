// 	31 ms, s	23.3 MB
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    cur++;
                    DFS(grid, i, j);
                }
               
                ans = max(cur, ans);
                cur = 0;
            }
        }
        return ans;
    }
    
    void DFS(vector<vector<int>>& grid,int i, int j){
        
        grid[i][j] = 0;
        if(isValid(grid, i + 1, j)){
            cur++;
            DFS(grid, i + 1, j);
        }
        if(isValid(grid, i, j +1 )){
            cur++;
            DFS(grid, i , j + 1 );
        }
        if(isValid(grid, i - 1, j)){
            cur++;
            DFS(grid, i - 1, j);
        }
        if(isValid(grid, i, j - 1)){
            cur++;
            DFS(grid, i, j - 1);
        }
        
    }
    
    bool isValid(const vector<vector<int>>& grid, int i,int j){
        if(i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
            return true;
        }
        return false;
    }
    private:
        int cur = 0;
        
};
