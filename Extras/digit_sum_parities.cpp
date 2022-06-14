#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int m=n;
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	int sum2=0;
	n=m+1;
	while(n){
		sum2+=n%10;
		n/=10;
	}
// cout<<"sum1 : "<<sum<<" sum 2: "<<sum2;
	if((sum&1)^ (sum2&1)){
		cout<<m+1;
	}
	else cout<<m+2;
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