class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // // brute force appoarch by declaring the two array 
        // // contain the 0's array and number's array 
        // //merged the both array and put the value into nums
        // vector<int>temp ;
        // vector<int>np ;

        // for(int i = 0 ; i< nums.size() ; i++){
        //     if(nums[i] == 0 ){
        //         temp.push_back(nums[i]) ;
        //     }else{
        //         np.push_back(nums[i]) ;
        //     }

        // }
        // np.insert(np.end() , temp.begin() , temp.end()) ;
        // nums = np ;
    
        // cout<<"this is the temp vector"<<endl ;
        // for(auto it : temp){
        //     cout<<it<<" " ; 
        // }

        // cout<<"this is the original vector"<<endl ;
        // for(auto it : nums){
        //     cout<<it<<" " ; 
        // }


        //opyimal apporach
        int j = -1 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] == 0){
                j = i ;
                break ;
            }
        }
        if(j == -1){
            return ;
        }

        for(int i = j+1 ; i<nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[j] , nums[i]) ;
                j++ ;
            }
        }
    }
};