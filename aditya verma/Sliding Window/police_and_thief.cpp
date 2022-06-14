#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	if(a==b){
		cout<<0<<endl;
		return;
	}
	b=2*abs(a-b);
	if(b&1)b++;
	cout<<b/2<<endl;
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