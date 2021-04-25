#include <bits/stdc++.h>
using namespace std;
void solve(){
	int k,l,m,n,d,f=0;
	cin>>k>>l>>m>>n>>d;
	if(k==1 || l==1 || m==1 || n==1){
		cout<<d;
		return;
	}
	for(int i=1;i<=d;i++){
		if(i%k==0 || i%l==0 ||i%m==0||i%n==0)
			f++;
	}
	cout<<f;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}