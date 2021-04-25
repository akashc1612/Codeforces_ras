#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,z=0;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		z=z-a[i];
		z=z+b[i];
		c[i]=z;
	}
	auto it=max_element(c,c+n);
	cout<<*it;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}