#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,bob,alice;
	cin>>n>>bob>>alice;

	int bn=0, an=0, cn=0;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp%bob==0 && temp%alice==0)cn++;
		else if(temp%bob==0)bn++;
		else if(temp%alice==0)an++;
	}
	int start;
	//game will start with bob
	//bob will remove all the commons
	if(cn>0)start=1;
	else start=2;
	
	if(start==1){
		if(an>bn)cout<<"ALICE";
		else cout<<"BOB";
	}
	else {
		if(bn>an)cout<<"BOB";
		else cout<<"ALICE";
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