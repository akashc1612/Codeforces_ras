#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a;
	int b[51],n=0;
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]!='+')
		{
			b[n++]=a[i]-'0';

		}
	}

	sort(b,b+n);
	cout<<b[0];
	for(int i=1;i<n;i++){
		cout<<"+"<<b[i];
	}

}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}