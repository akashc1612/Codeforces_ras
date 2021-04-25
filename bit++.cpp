#include <bits/stdc++.h>
using namespace std;
int solve(int r){
	string a;
	cin>>a;
	if(a[0]=='+' || a[1]=='+')
		r++;
	else
		r--;
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