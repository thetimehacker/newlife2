#include<bits/stdc++.h>
#define ll long long int
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
using namespace std;
void solve(){
	ll a,b;
	cin>>a>>b;
	ll count=0;
	if(a==0 and b==0){
		cout<<count<<endl;
		return;
	}
	if(a==0 || b==0){
		cout<<-1<<endl;
		return;
	}
	// if((a==1 and b==2)or(a==2 and b==1)){
	// 	count+=3;
	// 	a=0;
	// 	b=0;
	// }

	// if(b<a)swap(a,b);

	//now a is smaller and b is greater
	// if(a==b){
	// 	count+=a;
	// 	cout<<count;
	// 	return;
	// }

	while(1){
		// cout<<"a : "<<a<<" b : "<<b<<" count : "<<count<<endl;
		
		if(a==b){
			count+=a;
			break;
		}
		else if(abs(a-b)==1){
			count+=(min(a,b)-1);
			count+=3;
			break;
		}
		else{
			//a<b
			if(b<a)swap(a,b);
			if(abs((2*(a)-b))<abs(a-b)){
				a*=2;
				count++;
			}
			else{
				ll temp=min(a,b);
				count+=temp-1;
				a-=(temp-1);
				b-=(temp-1);
			}
		}
	}
	cout<<count<<endl;

}
int main(){
	SPEED;
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}