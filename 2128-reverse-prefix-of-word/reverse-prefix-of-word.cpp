class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = -1;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                end = i;
                break;
            }
        }

        if(end == -1) return word;
        string newWord = "";
        for(int i = end; i >= 0; i--){
            newWord += word[i];
        }

        for(int i = end + 1; i < word.length(); i++){
            newWord += word[i];
        }

        return newWord;
    }
};