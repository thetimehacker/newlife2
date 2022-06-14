#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s,ana;
	cin>>s>>ana;

	int a[26]={0},b[26]={0};

	for(auto x:ana){
		a[x-'a']++;
	}
	int count=0;
	int i=0,j=0;

	int flag=0;
	int n=s.size();
	int l=ana.size();
	while(j<n){
		b[s[j]-'a']++;
		if(b[s[j]-'a']>a[s[j]-'a'])flag++;
		if(j-i+1<l)j++;
		else{
			if(flag==0)count++;
			//slide the window
			b[s[i]-'a']--;
			if(b[s[i]-'a']>=a[s[i]-'a'])flag--;
			i++;
			j++;
		}
	}
	cout<<count;
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