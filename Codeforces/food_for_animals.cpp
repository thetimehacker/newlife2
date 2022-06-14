#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;
	long long extra= ((x>a)?(x-a):0) + ((y>b)?(y-b):0);
	if(extra>c)cout<<"NO";
	else cout<<"YES";
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