class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0 || needle.length() > haystack.length()) return -1;

        int hayLen = haystack.length();
        int neeLen = needle.length();

        for(int hayInd = 0; hayInd <= hayLen - neeLen; hayInd++){
            int neePtr = 0;
            while(neePtr < neeLen && haystack[hayInd + neePtr] == needle[neePtr]){
                neePtr++;
            }

            if(neePtr == neeLen) return hayInd;
        }

        return -1;
    }
};