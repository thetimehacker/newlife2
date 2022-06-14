#include<bits/stdc++.h>
using namespace std;
void traverse(queue<int> q){
	cout<<endl;
	while(q.size()){
		cout<<q.front()<<" ";
		q.pop();
	}
}

void solve(){
	//creating a queue
	queue<int> q;

	//adding elements in the queue;

	int n; //no. of elements
	cin>>n;

	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		q.push(temp);
	}

	//traversing a queue -- not traversing
	// for(auto x:q){
	// 	cout<<x<<" ";
	// }

	traverse(q);

	//poping the first element
	q.pop();

	traverse(q);


}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--){
		solve();
	}
}