class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        k = k % n ;
        if(k>n && n==1){
            return ;
        }else{
            vector<int> vec1(nums.begin() , nums.begin()+(n-k)) ;
    for(int i = 0 ; i<vec1.size()/2 ;i++){
        swap(vec1[i] , vec1[vec1.size()-i-1]) ;
    }

    cout<<"this is the vec1 reverse"<<endl ;
    for(auto it : vec1){
        cout<<it<<" " ; 
    }



    vector<int> vec2(nums.end()-k ,nums.end()) ;
    for(int i = 0 ; i<vec2.size()/2 ;i++){
        swap(vec2[i] , vec2[vec2.size()-i-1]) ;
    }

    cout<<"this is the vec2 reverse"<<endl ;
    for(auto it : vec2){
        cout<<it<<" " ; 
    }

    vector<int>merged = vec1;
    merged.insert(merged.end() , vec2.begin() ,vec2.end()) ;

    for(int i = 0 ; i<merged.size()/2 ;i++){
        swap(merged[i] , merged[merged.size()-i-1]) ;
    }
    cout<<"the merged array"<<endl ;
    for(auto it : merged){
        cout<<it<<" " ; 
    }

    for(int i = 0 ; i<merged.size() ; i++){
        nums[i] = merged[i] ;
    }
        }


    
            
        
    }
};