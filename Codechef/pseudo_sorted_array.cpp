#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x :v)cin>>x;

	int count=0;
	for(int i=0;i<n-1;i++){
		if(v[i]>v[i+1]){
			swap(v[i],v[i+1]);
			count++;
		}
	}

	if(count<=1)cout<<"YES";
	else cout<<"NO";
	cout<<endl;
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