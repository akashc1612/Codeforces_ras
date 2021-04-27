#include <bits/stdc++.h>
using namespace std;
int solve(int c){
	string a;
	cin>>a;
	if(a=="Tetrahedron")
		c=c+4;
	else if(a=="Cube")
		c=c+6;
	else if(a=="Octahedron")
		c=c+8;
	else if(a=="Dodecahedron")
		c=c+12;
	else
		c=c+20;
	return c;
}
int main(){
	cin.tie(0);
	int t,c=0;
	cin>>t;
	while(t--)
		c=solve(c);
	cout<<c;
	return 0;
}
