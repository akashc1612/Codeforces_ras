#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
	{
		if(toupper(a[i])>toupper(b[i]))
		{
			cout<<1;
			return;
		}
		else if(toupper(a[i])<toupper(b[i])){
			cout<<-1;
			return;
		}
	}
	cout<<0;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}