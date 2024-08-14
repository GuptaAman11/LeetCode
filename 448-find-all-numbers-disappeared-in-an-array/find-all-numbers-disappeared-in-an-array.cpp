class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>abc(nums.begin() , nums.end()) ;
        vector<int>ans ;
        for(int i = 1 ; i <= nums.size() ; i++){
            if(abc.find(i) == abc.end())
                ans.push_back(i) ;
        }

        
        
        return ans ;
    }
};