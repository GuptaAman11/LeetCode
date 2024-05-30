class Solution {
public:
    vector<int> twoSum(vector<int> &nums , int target) {
        map<int , int>maps;
        for(int i=0 ; i<nums.size() ; i++) {
            int current_value = nums[i] ;
            int x = target - current_value ;
            if(maps.find(x) != maps.end()){
                return { maps[x] , i} ;
            }
            maps[current_value] = i ;
        }
        return {} ;
    }
};