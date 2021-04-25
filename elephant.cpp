#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,i=0;
	cin>>a;
	while(a!=0){
		if(a>=5){
			i++;
			a=a-5;
		}
		else if(a==4){
			i++;
			a=a-4;
		}
		else if(a==3){
			i++;
			a=a-3;
		}
		else if(a==2){
			i++;
			a=a-2;
		}
		else{
			i++;
			a=a-1;
		}
	}
	cout<<i;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}