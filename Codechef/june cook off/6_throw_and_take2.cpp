#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(auto &x:a)cin>>x;
	for(auto &x:b)cin>>x;
	int ans=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]&1){
			//if it is odd
			ans=max(ans,b[i]-ans);
		}
	}
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}