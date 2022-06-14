#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int n;
vector<int> v(100005);
int findmin(int x){
		if(x==n)return dp[x]=0;
		else if(x==n-1)return (dp[x]==-1)?dp[x]=abs(v[n]-v[x]):dp[x];
		else{
			return (dp[x]==-1)?dp[x]=min(abs(v[x+1]-v[x])+findmin(x+1),abs(v[x+2]-v[x])+findmin(x+2))
			:dp[x];
		}
}
void solve(){
	memset(dp,-1,sizeof dp);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>v[i];
	cout<<findmin(1);
}
int main(){
	solve();
}