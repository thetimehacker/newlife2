#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int arr[26]={0};
	int count=0;
	for(int i=0;i<n;i++){
	
		if(arr[b[i]-'a']==0 and a[i]!=b[i]){
			arr[b[i]-'a']++;
			count+=1;
		}
	}
	cout<<count<<endl;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}