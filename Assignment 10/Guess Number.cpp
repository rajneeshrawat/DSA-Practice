class Solution {
public:
    int guessNumber(int n) 
    {
        int p;
        int low=1;
        int high=n ;
        while(low<=high)
        {
            int p =(low+(high-low)/2);
            if(guess(p)==0)
            {
                return p;
            }
            else if (guess(p)==1)
                
            {
                low=p+1;
            }
            else 
            {
                high=p-1;
            }
        }
        return 0;
    }
    
};
