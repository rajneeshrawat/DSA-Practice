#include<bits/stdc++.h>
using namespace std;
int reverseint(int n)
{
    int rev=0;
    while (n>0)
    {
        
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    return rev;
}
int main()
{
   int n;
   cin >> n;
   cout << reverseint(n);
   getchar();
   return 0;
    
}
