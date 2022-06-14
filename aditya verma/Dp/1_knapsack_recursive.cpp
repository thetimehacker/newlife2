#include<bits/stdc++.h>
using namespace std;
int n,W;
int dp[102][1002];
int knapsack(vector<int> wt, vector<int> val, int n, int W){
	if(W==0||n==0)return 0; 
	else return (dp[n][W]==-1)?dp[n][W]=((wt[n-1]>W)?knapsack(wt,val,n-1,W):
			max(val[n-1]+knapsack(wt,val,n-1,W-wt[n-1]),knapsack(wt,val,n-1,W))):
		dp[n][W];
}
void solve(){
	cin>>n>>W;
	vector<int> wt(n),val(n);

	//enter wt
	for(auto &x:wt)cin>>x;
	for(auto &x:val)cin>>x;

	cout<<knapsack(wt,val,n,W);


}
int main(){
	int t;
	cin>>t;
	memset(dp,-1,sizeof dp);
	while(t--){
		solve();
	}
}