class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        if(s=="") return 0;
        unordered_map<char,int>mp;
        int maxlength=INT_MIN;
        while(right<s.size()){
          mp[s[right]]++;
          while(mp[s[right]]>1){
            mp[s[left]]--;
            left++;
          }
          maxlength=max(maxlength,right-left+1);
          right++;
        }
        return maxlength;
    }
};