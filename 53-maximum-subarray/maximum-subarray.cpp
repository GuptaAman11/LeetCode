class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // int maxed = INT_MIN ;
        // int n = nums.size() ;
    
        // for(int i = 0 ; i<n ; i++){
        //     int sum = 0 ;
        //     for(int j = i ; j<n ; j++){
        //         sum = sum + nums[j] ;
        //         maxed = max(sum , maxed) ;
        //     }
        // }
        // return maxed ;
        
        int maxed = INT_MIN ;
        int n = nums.size() ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            sum = sum + nums[i] ;
            maxed = max(sum ,maxed) ;
            if(sum < 0){
                sum = 0 ;
            }
        }
        return maxed ;
    
    }
    
};