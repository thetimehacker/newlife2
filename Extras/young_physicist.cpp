#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	
	vector<int> v(n,0);
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		v[0]+=a;
		v[1]+=b;
		v[2]+=c;
	}

	bool flag=true;
	for(auto x:v){
		if(x!=0){
			flag=false;
			break;
		}
	}

	if(flag)cout<<"YES";
	else cout<<"NO";

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