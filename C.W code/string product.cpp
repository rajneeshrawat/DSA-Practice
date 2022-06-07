#include<bits/stdc++.h>
using namespace std;

string toChar="0123456789";
string product(string a, int b)
{
    int carry=0;
    string ans = "";
    for(int i=a.size()-1;i>=0;i--){
        int total = (a[i]-'0')*b + carry;
        carry = total/10;
        int last_digit = total%10;
        ans=ans+toChar[last_digit];
    }
    if(carry>0) ans= ans+to_string(carry);
    reverse(ans.begin(),ans.end());
    return ans;
    
}
string multiply(string a,string b)
{
    string ans = "";
    for(int i=b.size()-1;i>=0;i--){
        ans=sum(ans, product(a,b[i]-'0'));
        a=a+"0";
    }
    return ans;
}

int main() {
    cout<<product("123",50)<<"\n";
    cout<<multiply("123456","456")<<"\n";
    cout<<product("123456",456)<<"\n";
    cout<<123456*456<<"\n";
}
