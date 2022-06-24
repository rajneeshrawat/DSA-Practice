#include <bits/stdc++.h>
using namespace std;

bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    for (int i =0;i<A.size();i++){
    	if (A[r][i]==target){
    		return true;
    	}
    }
    return false;
}

int main()
{
	vector<vector<int>>x={{2,5,7},{1,4,8}};
	
	int target;
	cin>>target;
	int r;
	cin>>r;
	
	if(isTragetPresentInRow(x,target,r))
	{
		cout<<"present";
		
	}
	else {
		cout<<"not present"<<endl;
	}
}
