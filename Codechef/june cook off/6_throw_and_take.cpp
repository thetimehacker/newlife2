#include<bits/stdc++.h>

#define pii pair<int,int> 
#define F first
#define S second
using namespace std;
void print(priority_queue<pii> p){
	while(p.size()){
		cout<<p.top().first<<" "<<p.top().second<<endl;
		p.pop();
	}
	cout<<endl;
}
void solve(){
	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	int i=0;
	for(auto &x:v){
		cin>>x.first;
	}
	for(auto &x:v){
		cin>>x.second;
	}

	priority_queue<pair<int,int>> p;

	for(int i=0;i<n;i++){
		if((v[i].first&1) and ((p.size())?((i>p.top().second)?1:0):1)){
			p.push({v[i].second,i});
		}
	}
	print(p);
	//print the whole thing
	// for(auto x:p){
	// 	cout<<x.first<<" "<<x.second<<endl;
	// }


	bool turn=true; //bob move first

	int index=-1;
	int sum=0;
	for(int i=0;i<n;i++){
		if(v[i].second>index){
			if(turn)sum+=v[i].first;
			else sum-=v[i].first;

			index=v[i].second;
			turn=!turn;
		}
	}

	cout<<sum<<endl;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}