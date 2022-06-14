#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> v,int n){
	int maxx=INT_MIN;
	int sum=0;
	for(int i=0;i<n;i++){
		if(sum+v[i]>maxx){
			sum+=v[i];
		}
		else sum=v[i];
		maxx=max(sum,maxx);
	}
}
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x: v){
		cin>>x;
	}

	//find max
	int maxx=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=v[j];
			maxx=max(sum,maxx);
		}
	}

	cout<<"the max is : "<<maxx;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}