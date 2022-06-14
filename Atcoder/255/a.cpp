#include<bits/stdc++.h>
using namespace std;
void solve(){
	int r,c;
	cin>>r>>c;
	vector<vector<int>> v(2,vector<int>(2,0));
	for(auto &x:v){
		for(auto &y:x)cin>>y;
	}

	cout<<v[r-1][c-1];
}
int main(){
	solve();
}