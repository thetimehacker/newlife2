#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(auto &x:a){
		cin>>x;
	}
	for(auto &x:b){
		cin>>x;
	}

	vector<int> c(n);
	c[0]=b[0]-a[0];
	for(int i=1;i<n;i++){
		c[i]=b[i]-max(a[i],b[i-1]);
	}
	for(auto x:c){
		cout<<x<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}