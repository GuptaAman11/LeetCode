class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word11 = "";
        string word22 = "";
        for(auto a : word1){
            word11 += a;
        }
        for(auto a : word2){
            word22 += a;
        }

        // if(word11 == word22){
        //     return true ;
        // }else{
        //     return false ;
        // }
        return word11 == word22 ;

    }
};