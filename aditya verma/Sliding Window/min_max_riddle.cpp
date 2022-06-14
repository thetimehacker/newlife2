#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;

	vector<int> ans;
	vector<int> v(n);
	for(auto &x:v)cin>>x;
		
	for(int x=0;x<n;x++){
		int k=x+1;
		int i=0,j=0,mn=INT_MAX;int mx=INT_MIN;

		list<int> li;
		while(j<n){
			if(li.empty())li.push_back(v[j]);
			else{
				if(v[j]<li.back()){
					while(v[j]<li.back()){
						li.pop_back();
						if(li.empty())break;
					}
				}
				li.push_back(v[j]);
			}

			if(j-i+1<k){
				j++;
			}
			else{
				mn=min(li.front(),mn);
				mx=max(mn,mx);
				//sliding window
				if(li.front()==v[i]){
					li.pop_front();
				}
				i++;
				j++;
			}
		}

		
		ans.push_back(mx);
	}
	for(auto x:ans)cout<<x<<" ";
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