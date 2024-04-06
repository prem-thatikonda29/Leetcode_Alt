class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> open, close;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                open.push(i);
            }
            else if(s[i] == ')'){
                if(!open.empty()){
                    open.pop();
                }
                else{
                    close.push(i);
                }
            }
        }

        while(!open.empty()){
            s.erase(open.top(), 1);
            open.pop();
        }

        while(!close.empty()){
            s.erase(close.top(), 1);
            close.pop();
        }

        return s;
    }
};