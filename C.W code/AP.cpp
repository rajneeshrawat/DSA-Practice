#include<bits/stdc++.h>
using namespace std;
void returnap(int a,int n,int d)
{
    int first=a;
    for (int i = 0; i<n ;i++)
    {
        cout << first << " ";
        first = first + d;
    }
}
int main()
{
   int a,n,d;
   cin >> a >> n >> d;
   returnap(a,n,d);
   return 0;
    
}
