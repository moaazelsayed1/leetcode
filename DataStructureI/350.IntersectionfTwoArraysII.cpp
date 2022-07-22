// 	3 ms, 	10.1 MB
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr1[1005] = {0};
        int arr2[1005] = {0};

        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            arr1[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++){
            arr2[nums2[i]]++;
        }
        
        for(int i = 0; i < 1005; i++){
            if(arr1[i] > 0 && arr2[i] > 0){
                int lp = arr1[i] > arr2[i]? arr2[i]: arr1[i];
                while(lp--){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
