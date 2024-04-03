class Solution {
public:
    bool checkBrackets(char start, char end){
        if((start == '(' && end == ')') || (start == '[' && end == ']') || (start == '{' && end == '}')){
            return true;
        }
        return false;
    }

    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else if(c == ')' || c == '}' || c == ']'){
                if(!st.empty() && checkBrackets(st.top(), c)){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }

        return st.empty();
    }
};