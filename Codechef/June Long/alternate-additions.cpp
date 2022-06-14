#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	int diff=b-a;
	if(diff%3==0||diff%3==1)cout<<"YES";
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