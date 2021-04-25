#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,n=0;
	cin>>a;
	while(a--){
		int x,b;
		cin>>x>>b;
		if(b-x>=2)
			n++;

	}
	cout<<n;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}