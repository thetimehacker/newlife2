#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x:v){
		cin>>x;
	}

	int mx=INT_MIN;
	for(int i=1;i<n;i++){
		int sum=v[i-1]+v[i];
		mx=max(sum,mx);
	}
	mx=max(mx,v[n-1]+v[0]);
	cout<<mx<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}