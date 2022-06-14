#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long a,b;
	cin>>a>>b;
	cout<<__gcd(a,b);
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