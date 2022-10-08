class Solution {
public:
   int splitArray(vector<int>& nums, int m) {
        int l=0,r=0;
        for(int i=0;i<nums.size();++i) 
            l=max(l,nums[i]), r+=nums[i];
        
        int mid=0,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            int count=0,tempsum=0;
            for(int i=0;i<nums.size();++i)
            {
                if(tempsum+nums[i]<=mid) tempsum+=nums[i];
                else count++,tempsum=nums[i];
            }
            count++; 
            
            if(count<=m) r=mid-1, ans=mid;
            else l=mid+1;
        }  
        return ans;
    }
};
