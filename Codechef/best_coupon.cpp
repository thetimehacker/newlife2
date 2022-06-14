#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if(((n)/10)>100)cout<<n/10;
	else cout<<100;
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