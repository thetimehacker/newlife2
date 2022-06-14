#include<bits/stdc++.h>
using namespace std;
vector<int> sortsecondtime(vector<int> v,int n){
	if(n==0)return v;
	else{
		if(v[n]<v[n-1])swap(v[n],v[n-1]);
		else return v;
		v= sortsecondtime(v, n-1);
		return v;
	}
}
vector<int> sortVector(vector<int> v,int n){
	//using recursion
	if(n==1)return v;
	else{
		// int i=n-1;
		v=sortVector(v,n-1);
		// while(i>0){
		// 	if(v[i]<v[i-1]){
		// 		swap(v[i],v[i-1]);
		// 		i--;
		// 	}
		// 	else break;
		// }
		v=sortsecondtime(v,n-1);
		return v;
	}
}
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x:v){
		cin>>x;
	}

	//old vector
	cout<<"Old vector : "; 
	for(auto x:v)cout<<x<<" ";
		cout<<endl;

	//sort this vector

	v=sortVector(v,n);

	//new vector
	cout<<"New vector : ";
	for(auto x:v){
		cout<<x<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}