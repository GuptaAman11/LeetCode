class Solution {
public:
    int count(int n){
        int k=0;
        while(n>0){
            n /= 10;
            k++;
        }
        return k;
    }
    int findNumbers(vector<int>& nums) {
        int countD =0;
        for(int e : nums){
            if(count(e)%2 == 0) countD++;
        }
        return countD;
    }
};