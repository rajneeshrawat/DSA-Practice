#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    
    for (int i=0;i<A.size();i++)
    {
        if(A[i]==target){
            return true;
        }
    }
    
    return false;
}
int main(){
    vector<int> x={1,2,3};
    int target;
    
    cin >>target;
    if(isTargetPresent(x,target))
    {
    	cout<<"present";
    }
    else{
    	cout<<"not present"<<endl;
    }
}
