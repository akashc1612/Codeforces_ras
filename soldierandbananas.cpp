#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c,z=0;
	cin>>a>>b>>c;
	for(int i=0;i<c;i++)
		z=z+((i+1)*a);
	if(z-b<0)
		cout<<0;
	else
		cout<<z-b;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}