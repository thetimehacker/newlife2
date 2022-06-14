#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;
	cin>>a>>b;
	int diff=abs(a-b);
	//we just have to count the factors of diff
	int count=0;
	for(int i=1;i<=sqrt(diff);i++){
		if(diff%i==0){
			if(i==diff/i)count++;
			else count+=2;
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