// 50 ms, 24.9 MB	
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ::rotate(nums.begin(), nums.begin()+ nums.size() - (k % nums.size()), nums.end());
    }
};
