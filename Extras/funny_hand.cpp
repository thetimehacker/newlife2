#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	if((abs(a-b)>2)||(a-b==0))cout<<0;
	else if(abs(a-b)>1)cout<<1;
	else{
		//a-b=1;
		int mina=min(a,b);
		int maxb=max(a,b);
		if(mina>1 && maxb<n){
			cout<<2;
		}
		else if(mina>1||maxb<n)cout<<1;
		else cout<<0;
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