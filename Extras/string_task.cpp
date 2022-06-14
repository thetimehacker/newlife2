#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c){
	return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}
void solve(){
	string s;
	cin>>s;

	string ns="";
	for(int i=0;i<s.size();i++){
		if(s[i]<97)s[i]=s[i]+32;
		if(!isvowel(s[i]))
		{
			ns+='.';
			ns+=s[i];
		}
	}
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