#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int n,k;
int dp[100005];
vector<int> v(100005);
int fi(int start){
	if(start>=n-1)return 0;
	if(dp[start]!=-1)return dp[start];
	int mn=INT_MAX;
	for(int i=start+1;i<=min(n-1,start+k);i++){
		mn=min(abs(v[i]-v[start])+fi(i),mn);
	}
	return dp[start]=mn;
}
void solve(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	cout<<fi(0);

}
int main(){
	memset(dp,-1,sizeof dp);
	solve();
}