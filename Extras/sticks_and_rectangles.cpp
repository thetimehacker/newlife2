#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int number=n;
	map<int,int> m;
	while(n--){
		int temp;
		cin>>temp;
		m[temp]++;
	}
	int count=0;
	for(auto x:m){
		if(x.second&1)count++;
	}
	if((number+count)%4==0)cout<<count;
	else cout<<count+4-((number+count)%4);
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