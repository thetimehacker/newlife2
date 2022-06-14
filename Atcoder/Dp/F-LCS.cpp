#include<bits/stdc++.h>
using namespace std;
string s,t;
int sl,tl;
vector<vector<string>> dp(3001,vector<string>(3001,"1"));
string find(int i,int j){
	if(i==sl||j==tl){
		return dp[i][j]="";
	}
	if(dp[i][j]!="1")return dp[i][j];
	if(s[i]==t[j]){
		string temp1=s[i]+find(i+1,j+1);
		string temp2=find(i+1,j);
		string temp3=find(i,j+1);

		return dp[i][j]=(temp1.size()>temp2.size())?
				((temp1.size()>temp3.size())?
									 temp1:temp3)
				 :
				((temp2.size()>temp3.size())?
									 temp2:temp3);
	}
	else{
		string temp1=find(i+1,j);
		string temp2=find(i,j+1);

		return dp[i][j]=(temp1.size()>temp2.size())?
				temp1:temp2;
	}
}
void solve(){
	cin>>s>>t;
	sl=s.size();
	tl=t.size();
	cout<<find(0,0);
}
int main(){
	solve();
}