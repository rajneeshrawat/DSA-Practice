class Solution {
public:
    int searchInsert(vector<int>& A, int target)
    {
       
    for(int i = 0 ; i < A.size() ; i++)
    {
        if(A[i] >= target)
            return i;
    }
    return A.size(); 
    }
};
