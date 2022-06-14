#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	if(k==1){
		if(n%4!=0)cout<<"Ambiguous";
		else{
			cout<<"On";
		}
	}
	else{
		//light is off right now
		if(n%4==0)cout<<"Off";
		else cout<<"On";
	}
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