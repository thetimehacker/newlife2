#include<bits/stdc++.h>
using namespace std;
set<int> v;
void pf(int n){
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			v.insert(i);
			v.insert(n/i);
		}
	}
}
void solve(){
	int n;
	cin>>n;
	pf(n);
	for(auto x:v){
		cout<<x<<" ";
	}
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