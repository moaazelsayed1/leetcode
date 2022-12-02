class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curSum = 0, ans= 0;
        unordered_map<int, int> prfixes;
        prfixes[0] = 1;
        for(int  i = 0; i < nums.size(); i++){
            curSum += nums[i];
            ans += prfixes[curSum - k];
            prfixes[curSum]++;
        }
        return ans;
    }

};
