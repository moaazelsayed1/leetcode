// 43 ms	27.6 MB	
class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long l =0, r = nums.size() -1;
         sort(nums.begin(), nums.end());
        while(l <= r){
            long long mid = l + (r -l)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid +1;
        }
        return -1;
    }
};
