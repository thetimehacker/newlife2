//to find the largest size of sliding window for a given sum k
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(auto &x:v)cin>>x;

	int i=0,j=0,sum=0,mx=0;
	while(j<n){
		sum+=v[j];
		if(sum<k){
			j++;
		}
		else if(sum==k){
			mx=max(j-i+1,mx);
			j++;
		}
		else{ //sum>k
			while(sum>k){
				sum-=v[i];
				i++;
			}
			j++;
		}
	}

	cout<<"max size of window : "<<mx;
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