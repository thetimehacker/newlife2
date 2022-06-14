#include<bits/stdc++.h>
using namespace std;
void mysolution(){
	int n,k;
	cin>>n>>k;
	vector<int> v(n);
	for(auto &x:v)cin>>x;

	if(n<k){
		cout<<"Window size is larger than number of elements ";
		return;
	}
	queue<int> q;

	int i=0,j=0;
	// int ne_num=0;
	while(j<n){
		if(v[j]<0)q.push(v[j]);
		if(j-i+1<k){
			j++;
		}
		else{
			if(q.size())cout<<q.front()<<" ";
			else cout<<0<<" ";
			if(v[i]==q.front()){ //another condition : (v[i]<0)
				q.pop();
			}
			
			i++;
			j++;
		}
	}
}
void solve(){
	mysolution();
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