#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	string a="I hate ";
	string b="I love ";
	string c="that ";
	for(int i=0;i<n;i++){
		if(i==n-1){
			if(i%2==0)
				cout<<a<<"it ";
			else
				cout<<b<<"it ";
			return;
		}
		if(i%2==0)
			cout<<a<<c;
		else
			cout<<b<<c;
	}
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}