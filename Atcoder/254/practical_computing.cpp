#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<vector<int>> v(n,vector<int>());
	v[0].push_back(1);
	for(int i=1;i<n;i++){
		v[i].push_back(1);
		int j;
		for(j=1;j<v[i-1].size();j++){
			v[i].push_back(v[i-1][j-1]+v[i-1][j]);
		}
		v[i].push_back(1);
	}
	for(auto x:v){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}

}
int main(){
	solve();
}