// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         map<char , int>hashmapa ;
//         map<char , int>hashmapb ;
//         for(int i = 0 ; i<s.size() ; i++){
//             hashmapa[s[i]]++ ;
//             hashmapb[t[i]]++ ;

//         }
//         for(int j = 0 ; j<s.size() ; j++){
//             if(hashmapa[s[j]] != hashmapb[t[j]]){
//                 return false ;
//             }
//         }
//         return true ;
//     }
// };




class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        
        for(int i = 0; i < s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        
        for(int i = 0; i < smap.size(); i++){
            if(smap[i] != tmap[i]) return false;
        }
        return true;
    }
};
