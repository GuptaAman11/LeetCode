class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero_count = 0 ;
        int l = 0 ;
        int res = 0 ;
        for(int r = 0 ; r < nums.size() ; r++){
            
            if(nums[r] == 0){
                zero_count++ ;
            }

            while(zero_count > k){
                if(nums[l] == 0){
                    zero_count-- ;
                }
                    l++ ;
            }
            res = max(res , r-l+1);
        }
        return res ;
    }
};