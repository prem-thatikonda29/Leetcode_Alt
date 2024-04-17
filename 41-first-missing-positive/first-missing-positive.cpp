class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int number = 1;
        unordered_set <int> seen;

        for(int num : nums){
            if(num > 0) seen.insert(num);
        }

        while(seen.count(number) > 0){
            number++;
        }

        return number;
    }
};