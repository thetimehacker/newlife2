#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	int temp=n-m;
	if(m&1 and temp&1||!(temp&1)){
		cout<<"YES";
	}
	else if(!(m&1) and !(temp&1)){
		cout<<"YES";
	}
	else cout<<"NO";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}