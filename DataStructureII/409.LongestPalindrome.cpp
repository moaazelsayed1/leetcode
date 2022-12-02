class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char x:s) {
            mp[x]++;
        }
        int length=0, carry=0;
        for (auto x:mp) {
            if (x.second%2==1) {
                carry = 1;
                length += x.second-1;
            } else{
                length+=x.second;
            } 
        }
        return length+carry;
    }
};
