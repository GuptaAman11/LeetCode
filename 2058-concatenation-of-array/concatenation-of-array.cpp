class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size()) ;
        ans = nums ;
        for(int i = 0 ; i< nums.size() ; i++){
            ans.push_back(nums[i]);
        }
        return ans ;
    }
};