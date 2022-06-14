#include<bits/stdc++.h>
using namespace std;
bool islucky(string s){
	for(auto x: s){
		if(x!='4' && x!='7')return false;
	}
	return true;
}
void solve(){
	int n;
	cin>>n;
	if(islucky(to_string(n)))cout<<"YES";
	else if(n==0)cout<<"NO";
	else
	{
		bool flag=false;
		for(int i=1;i<n;i++){
			if(islucky(to_string(i))){
				if(n%i==0){
					flag=true;
					break;
				}
			}
		}

		if(flag)cout<<"YES";
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