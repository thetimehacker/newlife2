#include<bits/stdc++.h>
using namespace std;
void solve(){
	vector<int> v(3);
	cin>>v[0]>>v[1]>>v[2];
	
	if(v[0]==1)v[1]++;
	if(v[2]==1)v[1]++;

	if(v[1]==1){
		int index=(v[0]<v[2])?0:2;
		v[index]++;
	}
	cout<<v[0]*v[1]*v[2];
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