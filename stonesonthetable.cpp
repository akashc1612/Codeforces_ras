#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,z=0;
	cin>>n;
	string a;
	cin>>a;
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1])
			z++;
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