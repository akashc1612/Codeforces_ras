#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,f=0,c=0;
	cin>>a>>b;
	for (int i = 0; i < a; ++i)
	{
		c=0;
		for (int j = 0; j < b; ++j)
		{
			if(i%2==0)
				cout<<'#';
			else if(f==0){
				if(j==b-1){
					cout<<'#';
					c=1;
				}
				else
					cout<<".";
			}
			else{
				if(j==0){
					cout<<"#";
				}
				else{
					cout<<'.';
					c=1;
				}
			}
		}
		if(c==1){
		if(f==0)
			f=1;
		else
			f=0;}
		cout<<endl;
	}
}
int main(){
	cin.tie(0);
	int t;
	t=1;
	while(t--)
		solve();
	return 0;
}
