#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<long long> v(n);
	for(auto &x:v){
		cin>>x;
	}

	int count=0;
	bool flag=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(v[j]>=v[j+1]){
				while(v[j]>=v[j+1]){
					if(v[j]==0){
						flag=false;
						break;
					}
					count++;
					v[j]=floor(v[j]/2);
				}
			}
		}
	}
	if(flag)cout<<count<<endl;
	else cout<<-1<<endl;
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