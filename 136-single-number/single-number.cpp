class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int>hashmap ; 
        for(int n : nums){
            hashmap[n]++ ;
        }
        for(const auto & pair : hashmap){
            int value = pair.second ; 
            if(value == 1){
                return pair.first ; 
            }
        }
        return 0 ;

    }
};