#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
	if(n<=1)return n;
	else return fibo(n-1)+fibo(n-2);
}
void solve(){
	int n;
	cin>>n;
	cout<<fibo(n);
}
int main(){
	solve();
}