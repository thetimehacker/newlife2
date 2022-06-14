#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;

	int max_time_taken=0;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		int ans=k/temp;
		if(k%temp!=0)ans++;

		max_time_taken=max(max_time_taken,ans);
	}

	cout<<max(max_time_taken,n)<<endl;
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