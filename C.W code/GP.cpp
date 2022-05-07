#include<bits/stdc++.h>
using namespace std;
void returnap(int a,int n,int r)
{
    int first=a;
    for (int i = 0; i<n ;i++)
    {
        cout << first << " ";
        first = first * r;
    }
}
int main()
{
   int a,n,r;
   cin >> a >> n >> r;
   returnap(a,n,r);
   return 0;
    
}
