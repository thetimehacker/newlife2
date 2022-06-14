#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,r,b;
	cin>>n>>r>>b;
	int ro=round((float)r/(b+1));
	while(b>0){
		for(int j=0;j<ro;j++){
			cout<<"R";
			r--;
		}
		cout<<"B";
		b--;
	}
	if(r>0)while(r--)cout<<"R";
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