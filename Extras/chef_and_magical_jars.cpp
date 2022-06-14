#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	long long mx=0;
	long long temp;
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		sum+=temp-1;
		mx=max(temp,mx);
	}
	cout<<max(sum+1,mx)<<endl;
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