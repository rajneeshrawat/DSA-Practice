class Solution {
private:
   void recursion(vector<int> nums,int i,vector<vector<int>> &A)
    {
       if(i>=nums.size()){
            A.push_back(nums);
            return;
        }
       
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            recursion(nums,i+1,A);
            swap(nums[i],nums[j]);
           }
    }
   
public:
    vector<vector<int>> permute(vector<int>& nums) {
       
        vector<vector<int>> A;
        int i=0;
       
        recursion(nums,i,A);
        return A;
    }
};
