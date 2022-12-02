class Solution {
public:
    string addStrings(string num1, string num2) {
        int numOne = num1.size();
        int numTwo = num2.size();
        int carry = 0;
        string result;
        while(carry > 0 || numOne > 0 || numTwo > 0){
            int sum = 0;
            sum += numOne > 0 ? num1[numOne - 1] - '0' : 0;
            sum += numTwo > 0 ? num2[numTwo - 1] - '0' : 0;
            sum += carry;

            carry = sum / 10;
            sum %= 10;
            result.push_back(sum + '0');
            numOne--;
            numTwo--;
        }
        
        reverse(result.begin(), result.end());

        return result;
    }
};
