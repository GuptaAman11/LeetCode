class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int ,int>hashmap = {{0,1}} ; 
       int sum = 0 ;
       int ans = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            sum = (sum+nums[i]) % k ;
            if(sum<0){
                sum+=k ;
            }
            if(hashmap.find(sum) != hashmap.end()){
                ans += hashmap[sum] ;
                hashmap[sum]++ ;
            }else{
                hashmap[sum]++;
            }
        }
        return ans ;

    }
};