#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(auto &x:a)cin>>x;
	for(auto &x:b)cin>>x;

	//find the biggest gap
	int m=0;
	for(int i=0;i<n;i++){
		m=max(m,a[i]-b[i]);
	}

	// cout<<"m : "<<m<<" ";
	bool flag=true;
	for(int i=0;i<n;i++){
		if((a[i]-b[i]<0) or (((a[i]-b[i])<m) and (a[i]!=0) and (b[i]!=0))){
			flag=false;break;
		}
	}
	if(flag)cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}