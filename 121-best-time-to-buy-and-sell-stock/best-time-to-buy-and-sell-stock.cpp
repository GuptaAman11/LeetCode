
class Solution {
public:
    int maxProfit(vector<int>& price) {
        int lowest_price = INT_MAX ;
        int max_profit = 0 ;
       for(int i = 0 ; i<price.size() ; i++){
           lowest_price = min(lowest_price , price[i]) ;
           max_profit = max(max_profit , price[i]-lowest_price) ;
       }
       return max_profit ; 
       

    }
};
