#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,d=0,a=0;
	string x;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		if(x[i]=='A')
			a++;
		else
			d++;
	}
	if(a>d)
		cout<<"Anton";
	else if(d>a)
		cout<<"Danik";
	else
		cout<<"Friendship";
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}