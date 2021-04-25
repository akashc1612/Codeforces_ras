#include <bits/stdc++.h>
using namespace std;
int solve(int r){
	int a[3];
	int n=0;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			n++;
	}
	if(n>=2)
		r++;
	return r;
}
int main(){
	cin.tie(0);
	int t,r=0;
	cin>>t;
	while(t--)
		r=solve(r);
	cout<<r;
	return 0;
}