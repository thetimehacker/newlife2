#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,wl; //window length
	cin>>n>>wl;

	vector<int> v(n);
	for(auto &x:v)cin>>x;

	int mx=INT_MIN;
	int sum=0;

	for(int i=0;i<n;i++){
		sum+=v[i];
		if(i<wl-1)continue;
		mx=max(mx,sum);
		//shift the window - do manipulation in sum
		sum-=v[i-(wl-1)];
	}

	cout<<mx;

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