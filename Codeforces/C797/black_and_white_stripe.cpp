#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int m=INT_MAX;
	int sum=0;
	int i=0,j=0;
	while(j<k){
		if(s[j]=='W')sum++;
		j++;
	}
	m=min(sum,m);
	for(int k=j;k<n;k++){
		if(s[i]=='W')sum--;
		i++;
		if(s[k]=='W')sum++;
		m=min(sum,m);
	}
	cout<<m<<endl;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}