#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if(n==1||n==2)cout<<1;
	else cout<<n-1;
	cout<<endl;
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