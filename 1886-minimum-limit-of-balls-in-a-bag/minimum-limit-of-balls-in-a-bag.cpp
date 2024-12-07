class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        auto canAchieve = [&](int penalty) {
            int operations = 0;
            for (int balls : nums) {
                operations += (balls - 1) / penalty;
                if (operations > maxOperations) {
                    return false;
                }
            }
            return operations <= maxOperations;
        };

        int left = 1, right = *max_element(nums.begin(), nums.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canAchieve(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
