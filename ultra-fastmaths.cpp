#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[i])
			b[i]='1';
		else
			b[i]='0';
	}
	cout<<b;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}