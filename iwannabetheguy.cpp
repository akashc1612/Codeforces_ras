#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[200],t,z,f=1;
	cin>>t;
	for(int i=0;i<t;i++)
		cin>>a[i];
	cin>>z;
	for(int i=t;i<t+z;i++)
		cin>>a[i];
	if(t==0 && z==0){
		cout<<"Oh, my keyboard!";
		return;
	}
	sort(a,a+t+z);
	for(int i=0;i<t+z-1;i++){
		if(f==a[i])
			if(a[i]==a[i+1])
				continue;
			else
				f++;
		else{
			cout<<"Oh, my keyboard!";
			return;
		}}
		if(f==n)
			cout<<"I become the guy.";
		else{
			cout<<"Oh, my keyboard!";
			return;
		}

}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}