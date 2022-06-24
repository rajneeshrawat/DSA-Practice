#include<bits/stdc++.h>
using namespace std;
bool isTragetPresentInCol(vector<vector<int> >A, int target, int c)
{
  //returns true if target is present in column c of A then returns true else return false; 
  for(int i=0;i<=A.size();i++)
    {
        if(A[i][c]==target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<int> >A={{1,2,3},{4,5,6}};
    int target;
    cin>> target;
    int c;
    cin>>c;
    if(isTragetPresentInCol(A,target,c))
    {
        cout << "present";
    }
    else
    {
        cout <<"not present";
    }
    return 0;
}
