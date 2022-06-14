#include<bits/stdc++.h>
using namespace std;
int n;
vector<bool> visited(n+1,false);
void find(vector<int> adj[],int i){
	for(auto x:adj[i]){
		// cout<<endl<<x<<"is there \n";
		if(!visited[x]){
			cout<<x<<" ";
			visited[x]=true;
			find(adj,x);
		}
	}
}
void solve(){
	int m;
	cin>>n>>m;
	vector<int> adj[n+1];
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}

	cout<<"DFS : ";
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			// cout<<endl<<i<<" is not visited \n";
			cout<<i<<" ";
			visited[i]=true;
			find(adj, i);
		}
	}

}
int main(){
	solve();
}