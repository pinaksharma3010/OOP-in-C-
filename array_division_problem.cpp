class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i += 3) {
            if (i + 2 >= nums.size()) return {}; // Not enough elements for a group
            int a = nums[i], b = nums[i + 1], c = nums[i + 2];
            if (c - a > k) return {}; // Max difference too large
            result.push_back({a, b, c});
        }

        return result;
    }
};
