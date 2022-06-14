#include <iostream>
using namespace std;
bool five(string s){
    for(auto x:s){
        if(x=='0'||x=='5')return true;
    }
    return false;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(five(s))cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
}