#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	
	if(a%3==0 || b%3==0)cout<<0;
	else{
		a%=3;
		b%=3;
		cout<<max(a,b)/min(a,b);
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