#include<bits/stdc++.h>
using namespace std;
bool islucky(int n){
	string s=to_string(n);
	for(auto x:s){
		if(x!='4' && x!='7'){
			return false;
		}
	}
	return true;
}

bool check(int divider,int n,int len){
	if(n%divider==0){
		return true;
	}
	if(len<to_string(divider).size()){
		return false;
	}

	return check(stoi(to_string(divider)+'4'),n,len)||check(stoi(to_string(divider)+'7'),n,len);
}
void solve(){
	int n;
	cin>>n;

	if(islucky(n))cout<<"YES";
	else if(n==0)cout<<"NO";
	else{
		if(check(4,n,to_string(n).size()))cout<<"YES";
		else if(check(7,n,to_string(n).size()))cout<<"YES";
		else cout<<"NO";
	}
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