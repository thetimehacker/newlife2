#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	unordered_map<int,int> m;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		m[temp]++;
	}
	//we need to find element will largest number of brother and sister and min 2
	int minn=0;
	for(auto x:m){
		if(x.second>minn)minn=x.second;
	}
	if(minn<2){
		if(n<=2)cout<<0;
		else cout<<n-2;
	}
	else cout<<n-minn;
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