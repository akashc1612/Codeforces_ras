#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	string c;
	cin>>c;
	for(int i=0;i<b;i++){
		for(int j=0;j<a-1;j++){
			if(c[j]=='B' && c[j+1]=='G'){
				char t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
				j++;

		}
			}
	}
	cout<<c;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}