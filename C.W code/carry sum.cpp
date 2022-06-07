#include<bits/stdc++.h>
using namespace std;

string toChar="0123456789";
string sum(string a, string b){
    string ans="";
    int i= a.size()-1;
    int j= b.size()-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int total = (a[i]-'0') + (b[j]-'0') + carry;
        int last_digit = total%10;
        carry = total/10;
        ans =ans+toChar[last_digit];
        i--; j--;
    }
    while(j>=0){
        int total = (b[j]-'0')+carry;
        int last_digit = total%10;
        ans = ans+toChar[last_digit];
        carry = total/10;
        j--;
    }
    while(i>=0){
        int total = (a[i]-'0')+carry;
        int last_digit = total%10;
        ans = ans+toChar[last_digit];
        carry = total/10;
        i--;
    }
    
    if(carry>0){
        ans= ans +toChar[carry];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
