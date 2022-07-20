class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        
        dp[0] = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            dp[i] = max(nums[i], (dp[i-1] + nums[i]));
        }
        int ans = dp[0];
        
        for(int i = 0; i < n; i++){
            ans = max(ans, dp[i]);
        }
        return ans;
        
        
    }
};
