	#include<bits/stdc++.h>
	using namespace std;
	int sum(vector<int>v, int start,int n){
		if(start==n)return 0;
		else if(start==n-1)return abs(v[start]-v[start+1]);
		else{
			int s1=abs(v[start]-v[start+1])+sum(v,start+1,n);
			int s2=abs(v[start]-v[start+2])+sum(v,start+2,n);
			return min(s1,s2);
		}
	}
	void solve(){
		int n;
		cin>>n;
		vector<int> v(n);
		for(auto &x:v)cin>>x;
		cout<<sum(v,0,n-1);
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