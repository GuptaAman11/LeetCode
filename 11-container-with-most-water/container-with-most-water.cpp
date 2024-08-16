class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0 ;
        int end = height.size() - 1 ;
        int ans = 0; 
        while(start < end){
            int distance = end - start ;
            int area = distance * min(height[start], height[end]) ;
            ans = max(ans , area) ;
            if(height[start] < height[end]){
                start++ ;
            }else{
                end-- ;
            }
        }
        return ans ;
    }
};