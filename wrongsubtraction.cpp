#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<b;i++){
		if(a%10==0){
			a=a/10;
		}
		else{
			a--;
		}
	}
	cout<<a;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}