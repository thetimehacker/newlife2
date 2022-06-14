#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int one=-1,zero=-1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1' && (zero==-1||one==-1))one=i;
		else if(s[i]=='0' && (zero==-1))zero=i;
	}
	if(one==-1 and zero==-1)cout<<s.size();
	else if(one==-1){
		cout<<zero+1;
	}
	else if(zero==-1)cout<<1;
	else{
		if(zero<one){
			cout<<zero+1;
		}
		else cout<<zero-one+1;
	}
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