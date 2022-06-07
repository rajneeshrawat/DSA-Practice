#include <bits/stdc++.h>
using namespace std;

string toChar="0123456789";
string substract(string a,string b)
{
    bool isNegative = false;
    if(!compare(a,b)) {
        swap(a,b);
        isNegative = true;
    }
    
    string ans="";
    
    int i=a.size()-1;
    int j=b.size()-1;
    while(i>=0 && j>=0)
    {
        if(a[i]>=b[j]){
          ans=ans+toChar[a[i]-b[j]];   
        }
        else{
            ans=ans+toChar[a[i]-b[j]+10];
            int k=i-1;
            while(k>=0 && a[k]=='0'){
                a[k]='9';
                k--;
            }
            a[k]= toChar[a[k]-'1'];
        }
        i--;
        j--;
    }
    
    while(i>=0){
        ans+=a[i];
        i--;
    }
    if(isNegative){
        ans+='-';
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}

int main() {
    if(compare("00011","00012")) cout<<"hey"<<"\n";
    else cout<<"hello"<<"\n";
    cout<<substract("100","1");
}
