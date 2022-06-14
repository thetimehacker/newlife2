#include<bits/stdc++.h>
using namespace std;
/*
code for undirected graph 

--> for directed graph don't add second push back
--> for weighted graph take pair of int,int in vector data type

*/
void solve(){
	int n,m;
	cin>>n>>m;

	// undirected and unweighted graphs
	// vector<int> arr[n+1];
	// for(int i=0;i<m;i++){
	// 	int v,u;
	// 	cin>>v>>u;
	// 	arr[v].push_back(u);
	// 	arr[u].push_back(v);
	// }

	// // print(arr);
	// for(auto x:arr){
	// 	for(auto y:x){
	// 		cout<<y<<" "; 
	// 	}
	// 	cout<<endl;
	// }


	//weighted graphs
	vector<pair<int,int>> arr[n+1];
	for(int i=0;i<m;i++){
		int v,u,wt;
		cin>>v>>u>>wt;
		arr[v].push_back({u,wt});
		arr[u].push_back({v,wt});
	}
	cout<<"V -> V | W";
	for(auto x:arr){
		for(int i=0;i<x.size();i++){
			if(i!=x.size()-1)cout<<x[i].first<<" -> ";
			else cout<<x[i].first<<" | "<<x[i].second;
		}
		cout<<endl;
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