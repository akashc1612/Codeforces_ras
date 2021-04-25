#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a[5][5],x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				x=i;
				y=j;
			}
		}}
	int z=abs(x-2)+abs(y-2);
	cout<<z;
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}