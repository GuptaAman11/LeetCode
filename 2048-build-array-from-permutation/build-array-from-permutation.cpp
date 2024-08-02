class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>abc ; 
        for(int i = 0 ;i < nums.size() ; i++){
            int k = nums[i] ;
            abc.push_back(nums[k]) ; 
            cout<<nums[k] ;
            

        }
        return abc ;
    }
};