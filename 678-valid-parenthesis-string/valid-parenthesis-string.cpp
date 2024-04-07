class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for(char c : s){
            low += c == '(' ? 1 : -1;
            high += c != ')' ? 1 : -1;
            if(high < 0) break;
            low = max(0, low);
        }

        return low == 0;
    }
};