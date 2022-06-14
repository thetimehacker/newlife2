#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,b,a;
	cin>>n>>b>>a;
	if(a%b==0){
		cout<<"BOB";
	}
	else if(b%a==0){
		cout<<"ALICE";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}