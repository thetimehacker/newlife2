#include<bits/stdc++.h>
using namespace std;
void print(queue<int> q){
	while(q.size()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
void solve(){
	int n,m;
	cin>>n>>m;
	int count=0;

	queue<int> q;
	int i=n+1,j=n+1;
	int k=1;
	int xorr=n;
	q.push(n);
	bool flag=false;
	while(j<=m){
		if(k<4){
			xorr^=j;
			q.push(j);
			j++;
			k++;
		}
		if(k==4){
			if(xorr==0){
				flag=true;
				print(q);
				break;
			}
			else{
				int temp=q.front();
				q.pop();
				xorr^=temp;
				k--;
				//k will remain 4
			}
		}

	}
	if(!flag && xorr==0){
		flag=true;
		print(q);
	}
	if(!flag){
		cout<<-1;
		// print(q);
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