class Solution {
public:
    int maxDepth(string s) {
        int length = 0;
        int maxLength = 0;
        for(char c : s){
            if(c == '('){
                length++;
                maxLength = max(maxLength, length);
            }
            else if(c == ')'){
                length--;
            }
        
        }
        return maxLength;
    }
};