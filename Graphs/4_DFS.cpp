#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<int> &visited,vector<int> arr[]){
	for(auto k:arr[i]){
		if(visited[k]==0){
			cout<<k<<" ";
			visited[k]=1;
			dfs(k,visited,arr);
		}
	}
}
void solve(){
	//create adj list
	int n,m;
	cin>>n>>m;

	vector<int> arr[n+1]; //1 based indexing

	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		arr[v].push_back(u);
		arr[u].push_back(v);
	}

	vector<int> visited(n+1,0);

	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i,visited,arr);
			// visited[i]=1;
		}
	}

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