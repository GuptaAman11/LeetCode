class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int ,int>hashmap ;
        vector<int>temp ;
        for(int i = 0 ; i<nums.size() ; i++){
            hashmap[nums[i]]++ ;
        }
        for(auto const &pair : hashmap){
            cout<<pair.first<<" and " << pair.second ;
            if(pair.second > nums.size()/3){
                temp.push_back(pair.first) ;
            }
        }
        return temp ;
    }
};