class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter = 0 ;
        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(s[i] != ' '){
                counter++ ;
            }
            else if(s[i] == ' ' && counter > 0){
                break ;
            }
        }
        return counter ;
    }
};