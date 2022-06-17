#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cin>>n;
	int s=0;
	for (int i=1; i <= n;i++){
	s=s +i;
	for (int j = 1; j<= s; j++){
		cout<<"#";
	}
	cout<< "\n";
	}
	
}
