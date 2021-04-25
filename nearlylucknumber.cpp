#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long int a;
	cin>>a;
	long int x=0;
	int z=0;
	while(a!=0){
		int t=a%10;
		if(t==4 || t==7)
			x++;
		a=a/10;
	}
	long int temp=x;
	while(x!=0){
		int t=x%10;
		if(t!=4 && t!=7)
			z=1;
		x=x/10;
	}
	if(temp!=0 && z==0)
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