class Solution {
public:
    vector<int> assignElements(vector<int>& g, vector<int>& e) {
        unordered_map<int ,int> em;
        vector<int> ans(g.size());
        int prev;
        bool flag;
        for(int i = e.size()-1 ; i>=0 ; i--){
            em[e[i]] = i;
        }
        for(int i =0 ; i<g.size() ; i++){
            prev = -1;
            flag = false;
            for(int j =1 ; j<=sqrt(g[i]) ; j++){
                if((g[i]%j) == 0){
                    if(em.find(j) != em.end()){
                        flag = true;
                        if(prev!=-1){
                            if(prev>em[j]){
                                ans[i] = em[j];
                                prev = em[j];
                            }
                        }
                        else{
                            ans[i] = em[j];
                            prev = em[j];
                        }
                    }
                    if( g[i] % (g[i]/j) == 0){
                        if(em.find((g[i]/j)) != em.end()){
                            flag = true;
                            if(prev!=-1){
                                if(prev>em[g[i]/j]){
                                    ans[i] = em[g[i]/j];
                                    prev = em[g[i]/j];
                                }
                            }
                            else{
                                ans[i] = em[g[i]/j];
                                prev = em[g[i]/j];
                            }
                        }
                    }
                }
                
            }
            if(flag == false) ans[i] = -1;
        }
        return ans;
    }
};