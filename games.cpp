#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n],b[n],c=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]>>b[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(a[i]==b[j])
				c++;
		}
	}
	cout<<c;
}
int main(){
	cin.tie(0);
	int t;
	t=1;
	while(t--)
		solve();
	return 0;
}
