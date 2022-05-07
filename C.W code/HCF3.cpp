#include<bits/stdc++.h>
using namespace std;
int gcd (int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
    
}
    
int main()
{
    int s,t ;
    cin >> s >> t;
    cout << gcd(s,t);
    return 0;
}
