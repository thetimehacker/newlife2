//to detect a cycle in a graph
//traversing all the nodes regardless cycle is found or not
//remove the line 38 and comments if don't want to traverse all the nodes
#include<bits/stdc++.h>
using namespace std;
void solve(){
	//create a graph
	int n,m;
	cin>>n>>m;
	//number of nodes and vertices
	vector<int> arr[n+1];
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		arr[v].push_back(u);
		arr[u].push_back(v);
	}

	//created adj list

	//now find cycle in graph if any
	vector<int> visited(n+1,0);
	queue<pair<int,int>> q;

	bool result=false;
	for(int i=1;i<=n;i++){
		bool flag=false;
		if(visited[i]==0){
			q.push({i,-1});
			visited[i]=1;
			while(!q.empty()){
				int f=q.front().first;
				int prev=q.front().second;
				cout<<"f : "<<f<<" prev : "<<prev<<endl;
				bool flag1=false;
				for(auto x:arr[f]){
					if(visited[x]==1 && x!=prev){
						result=true;
						// flag1=true;
						// break;
					}
					if(visited[x]==0){
						q.push({x,f});
						visited[x]=1;
					}
				}
				// if(flag1){
				// 	flag=true;
				// 	break;
				// }
				q.pop();
			}
			// if(flag){
			// 	result=true;
			// 	break;
			// }
		}
	}

	if(result)cout<<"YES";
	else cout<<"NO";
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