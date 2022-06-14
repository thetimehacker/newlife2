#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int one=0,minusone=0;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp<0)minusone++;
		else one++;
	}
	if(n&1)cout<<-1;
	else{
		cout<<abs(one-minusone)/2;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}