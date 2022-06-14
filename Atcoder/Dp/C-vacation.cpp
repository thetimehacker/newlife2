#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<vector<int>> v(100005,vector<int>(4));
int dp[100005];
int n;
int find(int start,int prev){
	if(start==n)return 0;
	else if(prev==-1){
		if(dp[start]!=-1)return dp[start];
		int mx=INT_MIN;
		for(int i=0;i<3;i++){
			mx=max(v[start][i]+find(start+1,i),mx);
		}
		return dp[0]=mx;
	}
	else{
		if(dp[start]!=-1)return dp[start];
		int mx=INT_MIN;
		for(int i=0;i<3;i++){
			if(i!=prev){
				mx=max(v[start][i]+find(start+1,i),mx);
			}
		}
		return dp[start]=mx;
	}
}
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>v[i][j];
		}
	}
	cout<<find(0,-1);
}
int main(){
	memset(dp,-1,sizeof dp);
	solve();
}