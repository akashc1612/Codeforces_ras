#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long int a,b=0;
	cin>>a;
	b=b+a/100;
	a=a%100;
	b=b+a/20;
	a=a%20;
	b=b+a/10;
	a=a%10;
	b=b+a/5;
	a=a%5;
	b=b+a/1;
	a=a%1;
	cout<<b;
}
int main(){
	cin.tie(0);
	int t;
	t=1;
	while(t--)
		solve();
	return 0;
}
