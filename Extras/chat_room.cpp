#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	string t="hello";
	int i,j;
	for(i=0,j=0;i<s.size() and j<t.size();i++){
		if(s[i]==t[j]){
			j++;
			// cout<<"j = "<<j;

		}
	}

	if(j>=t.size())cout<<"YES";
	else cout<<"NO";
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