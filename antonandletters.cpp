#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a;
	int c=0,flag=0;
	getline(cin,a);
	for (int i = 0; i < a.length(); ++i)
	{
		if(isalpha(a[i])){
		flag=0;
		for (int j = i+1; j < a.length(); ++j)
		{
			if(a[i]==a[j]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			c++;
		}}
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
