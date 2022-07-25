// 6 ms, 	8.5 MB
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int arrr[26] = {0};
        int arrm[26] = {0};
        
        for(int i = 0; i < ransomNote.size(); i++){
            arrr[ransomNote[i] - 'a']++;
        }
        for(int i = 0; i < magazine.size(); i++){
            arrm[magazine[i] - 'a']++;
        }
        
        for(char c : ransomNote){
            if(arrm[c - 'a']  < arrr[c - 'a']){
                return false;
            }
        }
        
        return true;
    }
};
