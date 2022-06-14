#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int first,second;
	if(n&1){
		first=(n+1)/2;
		second=first+1;
	}
	else {
		first=n/2;
		second=first+1;
	}

	vector<int> v(n);
	for(int i=0;i<n;i+=2){
		v[i]=first;
		first--;
	}
	for(int i=1;i<n;i+=2){
		v[i]=second;
		second++;
	}
	for(auto x:v)cout<<x<<" ";
		cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}