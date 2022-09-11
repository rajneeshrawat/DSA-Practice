class Solution {
public:
    int countPairs(vector<int>& D) {
        int mod = 1e9 +7;
        unordered_map<int,int>s;
        int count=0;
        for(int i=0;i<D.size();i++){
            for(int j=0;j<22;j++){
                int k=1<<j;
                if(s.find(k-D[i])!=s.end()){
                    count+=s[k-D[i]];
                    count=count%mod;
                }
            }
            s[D[i]]++;
        }  
        return count;
        
        
    }
};
