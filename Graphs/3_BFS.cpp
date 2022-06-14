#include<bits/stdc++.h>
using namespace std;


/*
BFS Algorithm
1. create an adjacency list
2. create a visited array with all element 0
3. create a queue ... and insert first vector of the adjacency list
4. run a loop till all the elements are not traversed 
5. only traverse those elements whose value is 0 
after traversing each element inside the loop check for other elements connected
to that same elements 
6. if they are connected then put them in queue
7. and put the value of the elements to 1 in the visited array
*/

void solve(){
	int n,m; // no. of nodes & edges
	cin>>n>>m;

	vector<int> arr[n+1]; //following 1 based indexing 

	//adjacency list
	for(int i=0;i<m;i++){
		int v,u;
		cin>>v>>u;
		arr[v].push_back(u);
		arr[u].push_back(v);
	}

	//visited array
	int visited[n+1];

	memset(visited, 0, sizeof visited);

	//queue
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			q.push(i);
			while(!q.empty()){
				int f=q.front();
				if(visited[f]==0){
					cout<<f<<" ";
					for(auto x: arr[f]){
						if(visited[x]==0)q.push(x);
					}
					visited[f]=1;
					q.pop();

				}
				else q.pop();
			}
			cout<<endl;
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