class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        
        int rd = 0;  // rd is the index of the last unique element
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[rd]) {
                rd++;
                nums[rd] = nums[i];
            }
        }
        return rd + 1;
    }
};