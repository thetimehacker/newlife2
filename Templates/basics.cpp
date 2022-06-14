#include<bits/stdc++.h>
using namespace std;
template<typename T>
T maxx(T a, T b){
	return (a==b)? (a+b) : ((a>b)?a:b);
}
void solve(){
	int a,b;
	cin>>a>>b;
	cout<<"a: "<<a<<", b: "<<b<<endl;
	//comparing integers
	cout<<"biggest : "<<maxx<int>(a,b);
	//comparing charaters
	cout<<"biggest : "<<maxx<char>('a','b');
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}