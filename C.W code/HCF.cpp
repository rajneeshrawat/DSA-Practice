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
    int x,y ;
    cin >> x>> y;
    cout << hcf(x,y);
    return 0;
}
