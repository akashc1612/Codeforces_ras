#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a,b,c;
	int f=0;
	cin>>a>>b>>c;
	int n=c.length();
	if(a.length()+b.length()!=c.length()){
		cout<<"NO";
		return;
	}
	for (int i = 0;c[i]!='\0'; ++i)
	{
		for (int j = 0; a[j]!='\0'; ++j)
		{
			if(c[i]==a[j]){
				f++;
				a.erase(a.begin() + j);
				c.erase(c.begin() + i);
				i--;
			}
		}
	}
	for (int i = 0; c[i]!='\0'; ++i)
	{
		for (int j = 0; b[j]!='\0'; ++j)
		{
			if(c[i]==b[j]){
				f++;
				b.erase(b.begin() + j);
				c.erase(c.begin() + i);
				i--;
			}
		}
	}
	if(f==n)
		cout<<"YES";
	else
		cout<<"NO";
}
int main(){
	cin.tie(0);
	int t,c=0;
	t=1;
	while(t--)
		solve();
	return 0;
}
