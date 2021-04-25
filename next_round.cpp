#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,r,z,g;
	cin>>n>>r;
	int a[n];
	for(int i=0;i<r;i++){
		cin>>g;
		if(g==0){
			cout<<i<<endl;
			return;
		}

		a[i]=g;

	}
	for(int i=r;i<n;i++){
		cin>>z;
		if(g!=z){
			cout<<i<<endl;
			return;
		}}

	cout<<n<<endl;
	return;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}