#include<bits/stdc++.h>
using namespace std;
int hcf (int a,int b)
{
    if (b>a)
    {
        swap(a,b);
    }
    int r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int main()
{
    int s,t ;
    cin >> s >> t;
    cout << hcf(s,t);
    return 0;
}
