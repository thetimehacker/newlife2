#include<bits/stdc++.h>
using namespace std;
int arr[10000002];
int last(int n){
	if(n<=1)return arr[n]=n;
	else{
		if(arr[n]!=0)return arr[n];
		else return arr[n]=(last(n-1)+last(n-2))%10;
	}
}
void solve(){
	int n;
	cin>>n;
	memset(arr,0,sizeof(arr));
	if(n>=120)n=n%120;
	int output=last(n);
	// for(int i=0;i<=n;i++)cout<<arr[i]<<" ";
	// cout<<endl;

	cout<<output;
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
