#include<bits/stdc++.h>
using namespace std;

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    
    for (int i =0;i<A.size();i++){
    	for (int j=0;j<A[i].size();j++){
    		if(A[i][j]==target){
    			return true;
    		}
    	}
    }
    
    return false;
}
int main(){
    vector<vector<int>>x={{5,6,8},{4,7,9}};
    int target;
    
    cin >>target;
    if(isTargetPresentIn2DVector(x,target))
    {
    	cout<<"present";
    }
    else{
    	cout<<"not present"<<endl;
    }
}
