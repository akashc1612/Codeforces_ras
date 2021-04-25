#include <bits/stdc++.h>
using namespace std;
int solve1(int temp[]){
	for(int j=0;j<4;j++){
			for(int q=j+1;q<4;q++){
				if(temp[j]==temp[q])
					return 1;
					
			}
		}
		return 0;
}
void solve(){
	int n;
	cin>>n;
	for(int i=n+1;i<=9012;i++){
		int t=i;
		int flag=0;
		int temp[4],z=0;
		while(t){
			temp[z++]=t%10;
			t=t/10;

		}
		flag=solve1(temp);
		
		if(flag==0){
			cout<<i;
			break;
		}
	}
}
int main(){
	cin.tie(0);
	int t=1;
	while(t--)
		solve();
	return 0;
}