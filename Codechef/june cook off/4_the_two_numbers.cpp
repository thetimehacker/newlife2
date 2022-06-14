#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n;
	cin>>n;
	if(!(n&1)){
		long long maxx=n-2;
		if((n/2)&1){
			//is odd
			cout<<max(maxx,(((n/2)-2)*((n/2)+2))-1);
		}
		else cout<<max(maxx,((n/2)-1)*((n/2)+1)-1);
	}
	else cout<<max(n-2,((n-1)/2)*(((n-1)/2)+1)-1);
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}