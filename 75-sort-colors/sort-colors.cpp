class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int , int> hashmap ; 
        for(int i = 0 ; i<nums.size() ; i++){
            hashmap[nums[i]]++ ;
        }

        nums.clear() ;
        nums.insert(nums.end() ,hashmap[0] , 0) ;
        nums.insert(nums.end() , hashmap[1] , 1) ;
        nums.insert(nums.end() , hashmap[2] , 2) ;

    }
};