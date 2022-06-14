#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if(n%3==0){
		cout<<n/3<<" "<<n/3+1<<" "<<n/3-1;
	}
	else if(n%3==2){
		cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-1;
	}
	else cout<<n/3<<" "<<n/3+2<<" "<<n/3-1;
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}