#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	// cout<<n<<" = ";
	cin>>n;
	if(n==1){
		cout<<1<<endl;
		return;
	}
	int p=log2(n);
	if(p==log2(n)){
		cout<<n-pow(2,p-1);
	}
	else{
		int ans1=n-pow(2,p)+1;
		int ans2=pow(2,p)-pow(2,p-1);
		cout<<max(ans1,ans2);
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
		// for(int i=1;i<=100;i++)
		solve();
	}
}