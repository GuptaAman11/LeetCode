class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concat = 0 ;
        int start = 0 ;
        int end = nums.size() -1 ;
        if(nums.size() == 1) return nums[0] ;
        while(start < end){
            
                string a = to_string(nums[start]) ;
                string b = to_string(nums[end]) ;
                long long temp = stoll(a + b) ;
                concat += temp ;
                start++ ;
                end-- ;

                if(start == end){
                cout<<"done";
                concat += nums[start] ;
            }

            

        }
        return concat ;

    }
};