#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	if(n<k){
		cout<<0;
		return;
	}
	vector<int> v(n);
	for(auto &x:v)cin>>x;
	// int mx=0;

	// int i=0,j=0;
	// int sum=0;
	// while(j<k){
	// 	sum+=v[j];
	// 	j++;
	// }
	// mx=max(sum,0);
	// while(j<n){
	// 	sum+=v[j];
	// 	sum-=v[i];
	// 	mx=max(sum,mx);
	// 	i++;
	// 	j++;
	// }


	//aditya verma
	int mx=0;
	int sum=0;
	int i=0,j=0;
	while(j<n){
		if(j-i<k){
			sum+=v[j];
			j++;
		}
		else{
			//shifting the window
			mx=max(sum,mx);
			sum-=v[i];
			i++;
			sum+=v[j];
			j++;
		}
	}
	cout<<mx;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}