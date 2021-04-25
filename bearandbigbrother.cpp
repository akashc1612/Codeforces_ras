#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	for(int i=0;;i++){
		a=a*3;
		b=b*2;
		if(a>b){
			cout<<i+1;
			break;
		}
	}
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}