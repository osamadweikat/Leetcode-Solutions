class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;
        lastIndex.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (lastIndex.count(nums[i]) && i - lastIndex[nums[i]] <= k) return true;
            lastIndex[nums[i]] = i;
        }
        return false;
    }
};
