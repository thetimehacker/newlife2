#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if(n>99 || ((n%10) + ((n%100)/10))%2==0)cout<<"YES";

	else cout<<"NO";
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