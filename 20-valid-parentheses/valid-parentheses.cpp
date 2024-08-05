class Solution {
public:
    bool isValid(string s) {
        stack<char>abc ;
        for(auto c : s){
            if(s.size() == 1) return false ;
            if(c == '(' || c == '[' || c == '{'){
                abc.push(c) ;
            }
            else if( c == ')' || c == ']' || c == '}'){
                if(abc.empty()) return false ;
                if((c == ')' && abc.top() != '(' ) || 
                (c==']' && abc.top() !='[') ||
                (c == '}' && abc.top() != '{')) return false ;
                abc.pop() ;
            }
            
        }
        return abc.empty()  ;
    }
};