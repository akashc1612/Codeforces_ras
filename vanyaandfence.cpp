#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,n=0;
	cin>>a>>b;
	int x[a];
	for(int i=0;i<a;i++){
		cin>>x[i];
		if(x[i]>b)
			n=n+2;
		else
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