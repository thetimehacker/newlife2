#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(auto &x:v){
		cin>>x;
	}
	int mn=*min_element(v.begin(),v.end());

	int number_of_mn=0;
	for(auto x:v){
		if(x==mn)number_of_mn++;
	}
	// long long sum=accumulate(v.begin(),v.end(),0);
	// long long ans=(k/sum)*n;
	
	long long ans=k/mn;
	if(k%mn!=0)ans+=(number_of_mn);
	cout<<max(n,ans)<<endl;
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