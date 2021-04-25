#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n],f=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			f=1;
	}
	if(f==0)
		cout<<"EASY";
	else
		cout<<"HARD";
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}