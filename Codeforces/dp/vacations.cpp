#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v(101);
int dp[101][4];
int fi(int start,int activity){
	if(start==n)return dp[start][activity]=0;

	if(dp[start][activity]!=-1)return dp[start][activity];

	if(v[start]==0)return dp[start][activity]=min(1+fi(start+1,1),1+fi(start+1,2));
	else if(v[start]==1){
		if(activity==1){
			return dp[start][activity]=fi(start+1,2);//he will give contest
		}
		else{
			//he has to take rest
			//can't give competition
			return dp[start][activity]=min(1+fi(start+1,1),1+fi(start+1,2));
		}
	}
	else if(v[start]==2){
		if(activity==1){
			//rest
			return dp[start][activity]=min(1+fi(start+1,1),1+fi(start+1,2));
		}
		else{
			return dp[start][activity]=fi(start+1,1);
		}
	}
	else{
		return dp[start][activity]=fi(start+1,(activity==1)?2:1);
	}

}

void solve(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>v[i];

	cout<<min(fi(0,1),fi(0,2));
}

int main(){
	memset(dp,-1,sizeof dp);
	solve();
}