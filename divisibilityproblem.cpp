#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	int z=a%b;
	if(z==0){
		cout<<z<<endl;
		return;
	}
	cout<<abs(z-b)<<endl;
}
int main(){
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
