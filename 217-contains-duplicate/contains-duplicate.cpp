class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        seen.reserve(nums.size());  
        for (int num : nums) {
            if (!seen.insert(num).second) 
            return true;
        }
        return false;
    }
};
