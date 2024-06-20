class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int ,int>hashmap ;
        int maxfreq = -1 ;
        int max_element = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            hashmap[nums[i]]++ ;
        }
        for(const auto it : hashmap){
            if(it.second > maxfreq){
                maxfreq = it.second ;
                max_element = it.first ;
            }

        }
        return max_element ;
    }
};