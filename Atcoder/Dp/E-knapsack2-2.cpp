#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,w;
ll v[101][2];
// ll dp[100005][101];

unordered_map<ll,pair<ll,ll>> dp;
ll find(ll w, ll start){
	if(w==0||start==n){
		dp[w].first=start;
		return dp[w].second=0;
	}
	else{
		if(dp[w].first==start and start!=0){
			// cout<<"returning after finding "<<w<<" "<<dp[w].first<<" "<<dp[w].second<<endl;
			return dp[w].second;
		}
		ll temp=v[start][0]; //weight of cur element
		ll mx1=0;
		if((w-temp)>=0){
			//include it
			mx1=v[start][1]+find(w-temp,start+1);
		}
		ll mx2=find(w,start+1);
		dp[w].first=start;
		return dp[w].second=max(mx1,mx2);
	}
}
void solve(){
	cin>>n>>w;
	for(int i=0;i<n;i++){
		cin>>v[i][0]>>v[i][1];
	}
	cout<<find(w,0);
}
int main(){
	// memset(dp,-1,sizeof dp);
	solve();
}