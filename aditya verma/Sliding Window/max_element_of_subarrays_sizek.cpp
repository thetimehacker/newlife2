#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(auto &x:v)cin>>x;

	list<int> p;
	
	int i=0,j=0,mx=INT_MIN;
	while(j<n){
		if(v[j]<=mx)p.push_back(v[j]);
		else if(v[j]>mx){
			mx=v[j];
			if(p.size())p.clear();
			p.push_back(v[j]);
		}

		if(j-i+1<k)j++;
		else{
			cout<<p.front()<<" ";
			if(p.front()==v[i]){
				if(p.size())p.pop_front();
				mx=p.front();
			}
			//slide the window
			i++;
			j++;
		}
	}
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
