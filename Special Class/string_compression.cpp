//string compression using the count of repeated characters

#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	string ns="";
	int count=1;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			count++;
		}
		else{
			ns+=s[i-1];
			ns+=to_string(count);
			count=1;
		}
	}
	ns+=s[s.size()-1];
	ns+=to_string(count);
	cout<<ns;
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