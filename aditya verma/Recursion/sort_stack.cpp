#include<bits/stdc++.h>
using namespace std;

//printing stack using recursion
void print(stack<int> s){
	if(!s.size())return;
	else{
		int temp=s.top();
		s.pop();
		print(s);
		cout<<temp<<" ";
	}
}

stack<int> sortstack(stack<int> s){
	if(!s.size()){
		return s;
	}
	else{
		int temp=s.top();
		s.pop();
		s=sortstack(s);
		

	}
}
void solve(){
	stack<int> t;
	int n;
	cin>>n;
	while(n--){
		int temp;
		cin>>temp;
		t.push(temp);
	}

	print(t); 

	t=sortstack(t);

}
int main(){
	solve();
}