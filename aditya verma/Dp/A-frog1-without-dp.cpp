#include<bits/stdc++.h>
using namespace std;
int dp[100005];
vector<int> v(100005);int n;
int findmin(int x){
		if(x==n)return dp[x]=0;
		else if(x==n-1){
			if(dp[x]!=-1)return dp[x];
			else return dp[x]=abs(v[n]-v[x]);
		}
		else{
			if(dp[x]!=-1)return dp[x];
			else return dp[x]=min(abs(v[x+1]-v[x])+findmin(x+1),abs(v[x+2]-v[x])+findmin(x+2));
		}
}
void solve(){
	// int n;
	cin>>n;
	// vector<int> v(n+5);
	for(int i=1;i<=n;i++)cin>>v[i];
	cout<<findmin(1);
}
int main(){
	memset(dp,-1,sizeof dp);
	solve();
}