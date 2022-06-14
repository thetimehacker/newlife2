#include<bits/stdc++.h>
using namespace std;
char * solve(char * s){
	// int n = sizeof(s)/sizeof(*s);
	int n=strlen(s);
	// cout<<"size : "<<n;
	string ns="";
	for(int i=0;i<n;i+=3){
		char a=s[i];
		char b=s[i+1];

		if(abs(a-b)==0)ns+=(char)a;
		else ns+=(abs(a-b)-1)+'a';
	}
	// cout<<ns;
	int nk=ns.length();
	char arr[nk+1];
	strcpy(arr,ns.c_str());
	for(int i=0;i<nk;i++){
		arr[i]-=32;
	}
	char * ptr=arr;
	return ptr;
}
int main(){
	char arr[100];
	cin>>arr;
	cout<<solve(arr);
}