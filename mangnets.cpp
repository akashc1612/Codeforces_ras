#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n],z=1,t,c=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	t=a[0]%2;
	for(int i=0;i<n;i++){
		if(t==a[i]%2){
			continue;
		}
		z++;
		t=a[i]%2;
	}
	cout<<z;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}