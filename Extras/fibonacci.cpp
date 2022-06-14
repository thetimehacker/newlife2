#include<bits/stdc++.h>
using namespace std;
int fact(int n,int arr[]){
	if(n<=1)return arr[n]=n;
	else{
		if(arr[n]!=0)return arr[n];
		return arr[n]=fact(n-1,arr)+fact(n-2,arr);
	} 
}
void solve(){
	int n;
	cin>>n;
	int arr[n+2];
	memset(arr,0,sizeof(arr));
	cout<<fact(n,arr);
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