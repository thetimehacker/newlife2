#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(auto &x:v){
		cin>>x;
	}

	vector<pair<ll,ll>> vp;
	ll and_value=v[0];
	ll start=1;
	for(ll i=1;i<n;i++){
		if((and_value & v[i]) == 0){
			// cout<<and_value<< " and "<< v[i]<< " = 0"<<endl;
			and_value+=v[i];
		}
		else{
			vp.push_back({start,i});
			start=i+1;
			and_value=v[i];
		}
	}
	vp.push_back({start,n});

	if(vp.size()<=1)cout<<"NO"<<endl;
	else {
		cout<<"YES"<<endl;
		cout<<vp.size()<<endl;
		for(auto x:vp){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}