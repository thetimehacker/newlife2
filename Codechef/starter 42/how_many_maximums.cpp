#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<n-1;i++){
		if(s[i]=='0' and s[i+1]=='1')
			count++;
	}

	if(s[0]=='1')count++;
	if(s.back()=='0')count++;
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}