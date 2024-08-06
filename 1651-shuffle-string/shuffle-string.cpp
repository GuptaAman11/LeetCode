class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int , char >hashmap ;
        string result ;
        for(int i = 0 ; i < s.size() ; i++){
            hashmap[indices[i]] = s[i] ;
        }

        for(auto pairs : hashmap){
            result.push_back(pairs.second) ;
        }
        return result ;
    }
};