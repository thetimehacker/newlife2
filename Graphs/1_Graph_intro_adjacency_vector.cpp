#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> vec){
	for(auto x:vec){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<"\n";
	}
}
void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> vec(n+1,vector<int> (n+1, 0));
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		vec[u][v]=1;
		vec[v][u]=1;
	}

	print(vec);

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}