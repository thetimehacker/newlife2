#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	vector<int> v(n);
	int count=0;
	int mx=INT_MIN,pos=-1;
	for(auto &x:v)cin>>x;
	if(n>50000){
		for(int i=0;i<n;i++){
			if(v[i]<mx)count+=(i-pos);
			else if(v[i]>mx){
				mx=v[i];
				pos=i;
			}
		}
	}
	else{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(v[i]>v[j])count++;
			}
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