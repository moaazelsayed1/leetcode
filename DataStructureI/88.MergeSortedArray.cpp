// 	3 ms, 	9.2 MB
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> ans; 
        for(auto it : nums1){
            ans.push_back(it);
        }
        nums1.clear();
        while(i < m && j < n){
            if(ans[i] <= nums2[j]){
               
                nums1.push_back(ans[i]);
                 i++;
            }else{
                
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        if(i < m){
            for(int k = i; k < m; k++){
                nums1.push_back(ans[k]);
            }
        }else if(j < n){
             for(int k = j; k < n; k++){
                nums1.push_back(nums2[k]);
            }
        }
        
         
    }
};
