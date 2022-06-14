#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	int mi=INT_MAX,mx=INT_MIN;k
	bool flag=true;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp>mi and temp<mx){
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