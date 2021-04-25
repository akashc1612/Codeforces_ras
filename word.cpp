#include <bits/stdc++.h>
using namespace std;
void solve(){
	string a;
	cin>>a;
	int u=0,l=0;
	for(int i=0;i<a.length();i++){
		if(isupper(a[i])){
			u++;
		}
		else
			l++;
	}
	if(l>=u){
		for(int i=0;i<a.length();i++)
			a[i]=tolower(a[i]);
	}
	else
		for(int i=0;i<a.length();i++)
			a[i]=toupper(a[i]);
	cout<<a;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}