#include<bits/stdc++.h>
using namespace std;
void solve(){
	string v;
	cin>>v;

	int n=v.size();
	int k=2; // 2 is given
	//cin>>k;

	int arr[26]={0};


	string ms="";

	int i=0,j=0,mx=0,count=0;
	while(j<n){
		arr[v[j]-'a']++;
		if(arr[v[j]-'a']==1)count++; //it has increased right now

		if(count<=k){
			//at most 2 toys 
			if(mx<(j-i+1))ms=v.substr(i,j-i+1);
			mx=max(mx,j-i+1);
			j++;
		}
		else{
			//if count > k
			while(count>k){
				arr[v[i]-'a']--;
				if(arr[v[i]-'a']==0)count--; //it has reduced right now
				i++;
			}
			j++;
		}
	}

	cout<<"max toys : "<<mx<<" "<<ms;
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