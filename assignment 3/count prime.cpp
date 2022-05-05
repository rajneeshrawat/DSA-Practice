#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
   if (n <= 1)
   {
      return 0;
   }
   for (int i = 2; i <= n/2; i++)
   {
      if (n % i == 0)
      { 
          return 0;
      }
   }
   return 1;
}

int countprime(int b)
{
   int count=0;
   for(int i=0;i<=b;i++)
   {
      if(isprime(i)==1)
      {
         count++;
      }
   }
   return count;
}
int main()
{
   
   int end;
   cin >> end;
   
   cout <<countprime(end);
   return 0;
}
