#include<bits/stdc++.h>
using namespace std;

// int mn=INT_MAX;
int recurse(vector<int> v,int count,bool flag,int index){
	if(index>=v.size()-1){
		// mn=min(count+1,mn);
		return count+1;
	}
	else{
		int count1=recurse(v,count++,flag, index++);	
		int count2;
		if(flag && ((v.front()&1) ^ (v.back()&1))){
			count2=recurse(v,count,flag,index+2);
			flag=false;
		}
		else if(!flag && ((v.front()&1) ^ (v.back()&1))){
			count2=recurse(v,count,flag,index++);
		}

		return min(count1,count2);

	}
}
void solve(){
	int n;
	cin>>n;
	vector<int> v(n);
	int even=0,odd=0;
	for(auto &x:v){
		cin>>x;
		if(x&1)odd++;
		else even++;
	}

	if(!((v.front()&1) ^ (v.back()&1))){
		if(v.front()&1)cout<<odd-1;
		else cout<<even-1;
	}

	else{
		//having different parity
		if(v.front()&1)odd--;
		else even--;

		cout<<recurse(v,0,true,0);
	}
	cout<<endl;

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