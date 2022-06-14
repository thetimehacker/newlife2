//implementing bfs for an undirected graph
#include<bits/stdc++.h>
using namespace std;
vector<int>bfsofgraph(int n, vector<int> adj[]){
	vector<int> bfs;
	vector<int> visited(n+1, 0);

	for(int i=1;i<=n;i++){
		if(!visited[i]){
			queue<int> q;
			q.push(i);
			visited[i]=1;
			while(q.size()){
				int t=q.front();
				q.pop();
				bfs.push_back(t);
				for(auto x:adj[t]){
					if(!visited[x]){
						q.push(x);
						visited[x]=1;
					}
				}
			}
		}
	}
	return bfs;
}
void solve(){
	//given a graph
	//first create its adj list
	int n,m; //number of nodes and edges
	cin>>n>>m;
	//getting the edges and storing them in adj list
	vector<int> adj[n+1]; //1 based indexing
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//printing the adj list
	cout<<"Adj list : \n";
	int count=0;

	for(auto x : adj){
		cout<<count<< " : ";
		for(auto y : x){
			cout<<y<<" ";
		}
		cout<<endl;
		count++;
	}


	// vector<int> bfs=bfsofgraph(n,adj);
	cout<<"BFS : ";
	for(auto x:bfsofgraph(n,adj)){
		cout<<x<<" ";
	}
}
int main(){
	solve();
}