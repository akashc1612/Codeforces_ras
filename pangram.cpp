#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,flag=0,c=0;
	cin>>n;
	string a;
	cin>>a;
	for (int i = 0; i < n; ++i)
	{
		flag=0;
		for (int j = i+1; j < n; ++j)
		{
			if(toupper(a[i])==toupper(a[j])){
				flag=1;
				break;
			}
		}
		if(flag==0)
			c++;
	}
	if(c==26)
		cout<<"YES";
	else
		cout<<"NO";
}
int main(){
	cin.tie(0);
	int t;
	t=1;
	while(t--)
		solve();
	return 0;
}
