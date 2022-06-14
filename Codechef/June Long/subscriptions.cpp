#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,c;
	cin>>n>>c;
	if(n%6!=0)cout<<(n/6+1)*c;
	else cout<<(n/6)*c;
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}