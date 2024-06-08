class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> prefix_sum(nums.size() + 1, 0);
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            prefix_sum[i + 1] = (prefix_sum[i] + nums[i]) % k;
        }

        for (int i = 0; i < prefix_sum.size(); ++i) {
            int prefix = prefix_sum[i];
            if (seen.count(prefix) && i - seen[prefix] > 1) {
                return true;
            } else if (!seen.count(prefix)) {
                seen[prefix] = i;
            }
        }

        return false;
    }
};