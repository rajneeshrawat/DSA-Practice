#include<bits/stdc++.h>
using namespace std;
int gcd (int a,int b)
{
    if (b>a)
    {
        swap(a,b);
    }
    if (a%b==0)
    {
        return b;
    }
    return gcd(a%b,b);
}
int main()
{
    int s,t ;
    cin >> s >> t;
    cout << gcd(s,t);
    return 0;
}
