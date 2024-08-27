class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int , int>hashmap ;
        for(int i = 0 ; i < nums.size() ;i++){
            hashmap[nums[i]]++ ;

        }
        for(auto it : hashmap){
            cout<<it.second ;
            if(it.second > 1){
                return it.first ;
            }
        }
        return -1 ;
    }
};