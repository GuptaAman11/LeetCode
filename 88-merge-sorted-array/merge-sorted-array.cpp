class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged_vector;
        int left = 0, right = 0;
        
        while (left < m && right < n) {
            if (nums1[left] <= nums2[right]) {
                merged_vector.push_back(nums1[left]);
                left++;
            } else {
                merged_vector.push_back(nums2[right]);
                right++;
            }
        }
        
        while (left < m) {
            merged_vector.push_back(nums1[left]);
            left++;
        }
        
        while (right < n) {
            merged_vector.push_back(nums2[right]);
            right++;
        }
        for(int i = 0 ; i<nums1.size() ; i++){
            nums1[i] = merged_vector[i];
        }
    }
};