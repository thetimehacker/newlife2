#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n,m,a;
	cin>>n>>m>>a;
	n=(n%a!=0)?(n/a)*a+a:n;
	m=(m%a!=0)?(m/a)*a+a:m;
	cout<<(n*m)/(a*a);
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