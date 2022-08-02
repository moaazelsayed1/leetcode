// 	6 ms	8.6 MB
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        vector<int> dp(triangle.size() + 1, 0);

        for (int i = triangle.size()-1; i >= 0; i--){
            for (int j = 0; j< triangle[i].size(); j++){
                dp[j] = triangle[i][j] + min(dp[j], dp[j+1]) ;
            }
        }
            
        return dp[0];
    }
};
