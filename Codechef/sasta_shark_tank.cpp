#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	a*=2;
	if(a==b)cout<<"any";
	else if(a>b)cout<<"first";
	else cout<<"second";
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