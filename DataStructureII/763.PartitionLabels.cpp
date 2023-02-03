class Solution {
public:
    vector<int> partitionLabels(string s) {
        int arr[26] = {0};
        vector<int> result;
        int last = 0;
        for(int i = 0; i < s.size(); i++){
            arr[s[i] - 'a'] = i;
        }

        int left = 0, right = arr[s[left] - 'a'];

        while(right < s.size() && left < s.size()){
            right = arr[s[left] - 'a'];

            while(left < right){
                if(arr[s[left] - 'a'] > right){
                    right = arr[s[left] - 'a'];
                }
                left++;
            }
             
            result.push_back(right - last + 1);
            last = right+ 1;
            
            left++;
        }
        return result;
    }
};
