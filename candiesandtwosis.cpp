#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long int a;
	cin>>a;
	if(a%2==1)
		cout<<(a/2)<<endl;
	else
		cout<<(a/2)-1<<endl;
}
int main(){
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
