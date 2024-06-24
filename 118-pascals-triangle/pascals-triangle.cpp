class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0 ){
            return {} ;
        }
        if(numRows == 1){
            return {{1}} ;
        }
        vector<vector<int>>pascal  = generate(numRows -1) ;
        vector<int>newrows(numRows , 1) ;
        for(int i=1 ; i<newrows.size() - 1 ;i++){
            newrows[i] = pascal.back()[i-1] + pascal.back()[i] ;
        }
        pascal.push_back(newrows) ;
        return pascal ;
    }
};