class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count  = 0 ;
        map<int , int>hashmap ;
        for(int i = 0 ; i<nums.size() ; i++){
            hashmap[nums[i]]++ ;
        }


        for(const auto &pairs : hashmap){
            cout<<pairs.first<<""<<pairs.second<<endl ;
            if(pairs.second > 1){
                count++ ;    
            }
        }
        cout<<count<<endl ;
        if(count > 0){
            return true ;
        }
        return false ;
    }
};