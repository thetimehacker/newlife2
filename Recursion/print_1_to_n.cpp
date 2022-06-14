#include<bits/stdc++.h>
using namespace std;
void one2n(int n){
	if(n>0){
		one2n(n-1);
		cout<<n<<" ";
	}
	else return; 
}
void n2one(int n){
	if(n>0){
		cout<<n<<" ";
		n2one(n-1);
	}
	else return; 
}
void solve(){
	int n;cin>>n;
	cout<<"one 2 n : ";
	one2n(n);
	cout<<endl;
	cout<<"n 2 one : ";
	n2one(n);
	cout<<endl<<endl;
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