#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a(100005),b(100005);
int dp[100004][4];
int fi(int start,int row){
	if(start==n)return 0;
	if(dp[start][row]!=-1)return dp[start][row];
	int mx=INT_MIN;
	for(int i=start;i<n;i++){
		if(row==0){
			//can choose students from any row
			//we will find max from 3 ways
			return dp[start][row]=max({a[start]+fi(start+1,1),
						b[start]+fi(start+1,2),
						fi(start+1,0)});
		}
		else if(row==1){
			return dp[start][row]=max(b[start]+fi(start+1,2),
						fi(start+1,0));
		}
		else {
			return dp[start][row]=max(a[start]+fi(start+1,1),
						fi(start+1,0));
		}
	}
	
}
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}


	cout<<fi(0,0);
}
int main(){
	memset(dp,-1,sizeof dp);
	solve();
}