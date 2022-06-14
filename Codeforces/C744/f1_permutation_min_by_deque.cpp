#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	deque<int> dq;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(!dq.size())dq.push_back(temp);
		else{
			if(temp<dq.front()){
				dq.push_front(temp);
			}
			else dq.push_back(temp);
		}

	}
	
	for(auto x:dq){
		cout<<x<<" ";
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