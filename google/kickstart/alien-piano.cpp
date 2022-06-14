#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v(10005);
int dp[10005][5];
int fi(int start,int node){
	if(start==n)return 0;
	
	if(dp[start][node]!=-1)return dp[start][node];

	if(v[start-1]==v[start]){
		return dp[start][node]=fi(start+1,node);
	}
	else if(v[start]<v[start-1]){
		if(node==1){
			// cout<<"rule break"<<endl;
			return dp[start][node]=1+min({
					fi(start+1,1),
					fi(start+1,2),
					fi(start+1,3),
					fi(start+1,4)
				}
				);	
		}
		else return dp[start][node]=fi(start+1,node-1);
	}
	else if(v[start]>v[start-1]){
		if(node==4){
			//rule break
			// cout<<"rule break"<<endl;
			return dp[start][node]=1+min({
				fi(start+1,1),
				fi(start+1,2),
				fi(start+1,3),
				fi(start+1,4)
			});
		}
		else return dp[start][node]=fi(start+1,node+1);
	}

}
int solve(){
	memset(dp,-1,sizeof dp);
	cin>>n;
	for(int i=0;i<n;i++)cin>>v[i];


		cout<<"starting from 1 : "<<fi(1,1)<<endl;
		cout<<"starting from 2 : "<<fi(1,2)<<endl;
		cout<<"starting from 3 : "<<fi(1,3)<<endl;
		cout<<"starting from 4 : "<<fi(1,4)<<endl;
	return min({
		fi(1,1),
		fi(1,2),
		fi(1,3),
		fi(1,4)
	}
	);


	// return fi(1,1);

	//1 - starting value of the vector
	//2 - prev value of the vector
	//3 - starting value of the alien node

	
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cout<<"case #"<<i<<": "<<solve()<<endl;
	}
}