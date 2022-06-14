#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	bool flag=false;
	//created an adj list
	vector<int> visited(n+1,0);
	for(int i=1;i<=n;i++){
		queue<int> q;
		if(visited[i]==0){
			cout<<i<<" is not visited ! "<<endl;
			q.push(i);
			visited[i]=-1;
			while(q.size()){
				int t=q.front();
				q.pop();
				for(auto x:adj[t]){
					if(visited[x]==0){
						cout<<x<<", parent : "<<t<<" : is not visited !"<<endl;
						q.push(x);
						visited[x]=t;
					}
					else if(visited[t]!=x){
						cout<<x<< " is making a cycle ! "<<endl;
						flag=true;
						break;
					}
					// else cout<<x<<" is visited ! "<<endl;
				}
				if(flag)break;
			}
			if(flag)break;
		}
	}
	if(flag)cout<<"Cycle Detected!";
	else cout<<"No Cycle Detected!";
}
int main(){
	solve();
}