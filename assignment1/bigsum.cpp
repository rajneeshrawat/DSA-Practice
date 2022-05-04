#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long sum = 0;
    cin >> n;
    vector<long>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
        sum= sum+ arr[i];
        
    }
    cout << sum;
    return 0;
}
