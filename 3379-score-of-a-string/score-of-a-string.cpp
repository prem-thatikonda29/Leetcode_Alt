class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int prev = (int)s[0];

        for(int i = 1; i < s.length(); i++){
            score += abs(prev - (int)s[i]);
            prev = (int)s[i];
        }        

        return score;
    }
};