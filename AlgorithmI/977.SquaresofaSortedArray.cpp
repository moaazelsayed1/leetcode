// 	50 ms, 	26 MB
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        
        int i = 0, j = nums.size() - 1;
        int cur = j;
        
        while (i <= j){
            if(abs(nums[j]) > abs(nums[i])){
                ans[cur] = nums[j] * nums[j];
                j--;
            }else {
                ans[cur] = nums[i] * nums[i];
                i++;
            }
            cur--;
        }
        return ans;
    }
};
