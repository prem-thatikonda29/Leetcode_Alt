class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end = digits.size() - 1;
        int carry = 0;
        if(digits[end] >= 0 && digits[end] < 9){
            digits[end] += 1;
            return digits;
        }
        else{
            digits[end] = 0;
            carry = 1;
            for(int i = end - 1; i >= 0; i--){
                if(digits[i] >= 0 && digits[i] < 9){
                    digits[i] += carry;
                    return digits;
                }
                else{
                    carry = 1;
                    digits[i] = 0;
                }
            }
        }

        if (carry == 1) {
            vector<int> new_digits(digits.size() + 1, 0); 
            new_digits[0] = 1; 
            return new_digits;
        }

        return digits;
    }
};