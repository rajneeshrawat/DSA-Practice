#include <bits/stdc++.h>
using namespace std;

bool compare(string a,string b){
    int i=0,j=0;
    while(i<a.size() && a[i]=='0') 
    {
        i++;
    }
    while(j<b.size() && b[j]=='0')
    {
        j++;
    }
    if((a.size()-i)>(b.size()-j))
    {
        return 1;
    }
    if((a.size()-i)<(b.size()-j))
    {
        return 0;
    }
    
    while(i<a.size() && j<b.size() && a[i]==b[j])
    {
        i++;
        j++;
    }
    if(i==a.size())
    {
        return 1;
    }
    
    return a[i]>b[j];
}
