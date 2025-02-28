class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        stack<int> st;
        vector<int> v(nums.size()) ;
        for(int i=0 ; i<nums.size() ; i++){
            while(st.size()>0 && nums[st.top()]>=nums[i]) st.pop();
            if(st.size()>0){
                v[i] = st.top();
            }
            else{
                v[i] = -1; 
            }
            st.push(i);
        }
        int a = -1 , b = -1 ;
        for(int i=v.size()-1 ; i>=0 ; i--){
            if(v[i] != -1){
                if(a == -1 && b == -1){
                    a = v[i];
                    b = i;
                }
                else if( a<v[i] ){
                    a = v[i];
                    b = i; 
                }
            }
        }
        if(a != -1 && b != -1){
            swap(nums[a] , nums[b] );
            sort(nums.begin()+a+1 , nums.end());
            return;
        }
        reverse(nums.begin() , nums.end());
        return;
    }
};