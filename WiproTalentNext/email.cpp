#include<bits/stdc++.h>
using namespace std;
char * solve(char * s){
	string part1="",part2="",part3="";
	int n=strlen(s);
	bool flag1=false,flag2=false;
	for(int i=0;i<n;i++){
		if(s[i]=='@'){
			flag1=true;
		}
		else if(s[i]=='.'){
			flag2=true;
		}

		if(!flag1){
			part1+=s[i];
		}
		else if(flag1 && !flag2){
			part2+=s[i];
		}
		else part3+=s[i];
	}

	cout<<"part 1 : "<<part1<<endl;
	cout<<"part 2 : "<<part2<<endl;
	cout<<"part 3 : "<<part3<<endl; 
	return  s;
}
int main(){
	char arr[100];
	cin>>arr;
	solve(arr);
}