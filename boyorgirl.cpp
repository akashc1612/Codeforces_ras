#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a;
	int z=0;
	cin>>a;
	for(int i=0;i<a.length();i++){int x=0;
		for(int j=i+1;j<a.length();j++){
			if(a[i]==a[j])
				x=1;

		}
		if(x==1)
			continue;
		else
			z++;}

	if(z%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}