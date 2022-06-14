#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	int k;
	cin>>s>>k;

	int n=s.size();
	int arr[26]={0};

	int i=0,j=0,mx=0,count=0;
	while(j<n){
		arr[s[j]-'a']++;
		if(arr[s[j]-'a']==1)count++;

		if(count<k){
			j++;
		}
		else if(count==k){
			mx=max(j-i+1,mx); //max length of substring
			j++;
		}
		else{
			//count > k
			while(count>k){
				arr[s[i]-'a']--;
				if(arr[s[i]-'a']==0)count--;
				i++;
			}
			j++;
		}
	}
	cout<<"max length : "<<mx;
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