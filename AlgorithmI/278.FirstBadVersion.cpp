// 0 ms, 5.9 MB	
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    
public:
    int firstBadVersion(int n) {
        long long l = 0, r = 10000000000, ans;
        while(l <= r){
            long long mid = l + (r - l) /2;
            if(isBadVersion(mid)){
                ans = mid;
                r = mid - 1;
            }else
                l = mid + 1;
        }
        return ans;
    }
};
