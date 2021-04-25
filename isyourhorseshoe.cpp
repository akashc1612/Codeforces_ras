#include <bits/stdc++.h>
using namespace std;
void solve(){
	long int a[4],c=0,f=0;
	for (int i = 0; i < 4; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < 4; ++i)
	{
		f=0;
		for (int j = i+1; j < 4; ++j){
			if(a[i]==a[j]){
				f=1;
				break;
			}
			else
				f=0;
		}
		if(f==0){
			c++;
		}
		else
			continue;
	}
	cout<<4-c;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}