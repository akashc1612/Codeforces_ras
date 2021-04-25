#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a,b;
	cin>>a>>b;
	int z=0;
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[b.length()-1-i])
			z=1;
	}
	if(z==0)
		cout<<"YES";
	else
		cout<<"NO";
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}