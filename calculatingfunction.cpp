#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long int n,z=0;
	cin>>n;
	if(n%2==0)
		cout<<n/2;
	else
		cout<<'-'<<(n/2)+1;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}