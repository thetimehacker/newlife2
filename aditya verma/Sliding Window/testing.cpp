#include<bits/stdc++.h>
using namespace std;
void solve(){
	map<int,int> m;
	m[1]++;
	cout<<m.size()<<endl;
	m[1]--;
	cout<<m.size()<<endl;
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