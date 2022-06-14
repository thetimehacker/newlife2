#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,ws; //window_size
	cin>>n>>ws;
	vector<int> v(n);
	for(auto &x:v)cin>>x;

	int mx=INT_MIN;
	int sum=0;
	for(int i=0;i<ws;i++){
		sum+=v[i];
	}
	mx=max(mx,sum);
	for(int i=0;i<n-ws;i++){
		sum-=v[i];
		sum+=v[ws+i];
		mx=max(sum,mx);
	}

	cout<<"max sum : "<<mx;
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