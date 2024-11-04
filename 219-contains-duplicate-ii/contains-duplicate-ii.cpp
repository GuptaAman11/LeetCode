class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> d;

        for (int i = 0; i < nums.size(); ++i) {
            int n = nums[i];
            if (d.find(n) != d.end() && i - d[n] <= k) {
                return true;
            } else {
                d[n] = i;
            }
        }
        return false;
    }
};