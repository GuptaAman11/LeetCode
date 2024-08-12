class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ;
        map<string , vector<string>> hashmap ;
        for(int i = 0 ; i < strs.size() ; i++){
            string temp = strs[i] ;
            sort(temp.begin() , temp.end()) ; 
            hashmap[temp].push_back(strs[i]);
        }
        for(auto it : hashmap){
            ans.push_back(it.second) ;
        }
        return ans ;
    }
};