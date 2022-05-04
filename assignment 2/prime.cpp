#include<bits/stdc++.h>
usin namespace std;
#define int long long 

vector<int>Prime;
void Seive()
{ int Max= 2e5+5;
 vector<bool>isPrime(Max,1);
 isprime[1]=0;
 for (int i=2;i<Max;i++)
  { if (!isPrime[i] continue;
        Prime.push_back(i);
        for (int j=i*j; j<Max;j+=i) isPrime[j]=0;
   }
 }
        
        signed main() 
        {
          Seive ();
          for(int a: Prime)
          {
            cout<<a<<" ";
            if (a>100)
            {
              break;
            }
          }
        }   
