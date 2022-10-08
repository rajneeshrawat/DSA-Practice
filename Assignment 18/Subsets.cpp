class Solution {
    vector<int>A;
public:
    void rec(int i,vector<int>num,vector<vector<int>> &ans){
        if(i>=num.size()){ 
            ans.push_back(A);
            return ;
        }
        A.push_back(num[i]);
        rec(i+1,num,ans);
        A.pop_back();
        rec(i+1,num,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        rec(0,nums,ans);
        return ans;
    }
};
