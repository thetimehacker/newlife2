#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int n=s.size();
	int arr[26]={0};
	int i=0,j=0,mx=0,count=0;
	string ms="";
	while(j<n){
		arr[s[j]-'a']++;
		if(arr[s[j]-'a']>1)count++;
		if(count==0){
			if(mx<(j-i+1))ms=s.substr(i,j-i+1);
			cout<<"ms : "<<ms<<endl; 
			mx=max(j-i+1,mx);
			j++;
		}
		else if(count>0){
			while(count>0){
				arr[s[i]-'a']--;
				if(arr[s[i]-'a']==1)count--;
				i++;
			}
			j++;
		}
	}
	cout<<"longest substring : "<<ms<<" "<<mx;
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