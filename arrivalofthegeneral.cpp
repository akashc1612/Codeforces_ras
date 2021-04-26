#include <bits/stdc++.h>
using namespace std;
void solve(){
	long int n,f1[10000],f2,f11,c=0;
	cin>>n;
	long int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	auto x=max_element(a,a+n);
	auto y=min_element(a,a+n);
	for (int i = 0; i < n; ++i)
	{
		if(*x == a[i]){
			f1[c++]=i;
		}
		if(*y == a[i]){
			f2=i;
		}
	}
	x=min_element(f1,f1+c);
	f11=*x;
	f2=n-1-f2;
	if(f11+f2>=n){
		cout<<f11+f2-1;
		return;
	}
	else
		cout<<f11+f2;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}
