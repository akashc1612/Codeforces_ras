#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	float z,b=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		b=b+a[i];
	}
	z=b/n;
	cout<<z;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}