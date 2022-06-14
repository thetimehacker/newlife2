#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	int temp;
	cin>>temp;
	mi=temp;mx=temp;
	bool flag=true;

	for(int i=n-2;i>=0;i--){
		int temp;
		cin>>temp;
		if(temp<mi || temp>mx){
			flag=false;
			break;
		}
		if(temp<mi)mi=temp;
	    if(temp>mx)mx=temp;
	}
	if(flag)cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}