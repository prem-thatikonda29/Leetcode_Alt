class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size() / 4;
        int maxNum = arr[0];
        int occ = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == maxNum){
                occ++;
                if(occ > size) return arr[i];
            }
            else{
                maxNum = arr[i];
                occ = 1;
            }
        }

        return arr[0];
    }
};