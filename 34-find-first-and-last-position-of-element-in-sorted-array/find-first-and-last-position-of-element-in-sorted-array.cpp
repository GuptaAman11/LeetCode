class Solution {
public:
    int leftPosition(vector<int>&nums , int target){
        int high = nums.size()-1 ;
        int low = 0 ;
        int left = -1 ;
        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[mid] == target){
                left = mid ;
                high = mid - 1 ;
            }
            else if(nums[mid] > target){
                high = mid -1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return left ;
    }

    int rightPosition(vector<int>&nums , int target){
        int high = nums.size()-1 ;
        int low = 0 ;
        int right = -1 ;
        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[mid] == target){
                right = mid ;
                low = mid +1 ;
            }
            else if(nums[mid] > target){
                high = mid -1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return right ;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result = {1,2};
        result[0] = leftPosition(nums , target) ;
        result[1] = rightPosition(nums , target) ;
        return result ;

    }
};