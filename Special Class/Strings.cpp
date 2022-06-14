#include<bits/stdc++.h>
using namespace std;


//oneReplaceaway - checks if there is only one difference

bool replace(string s1, string s2){
	bool flag=false;
	int l1=s1.size();
	int l2=s2.size();

	int i=0,j=0;
	while(i<l1 && j<l2){
		//compare the strings, index by index
		if(s1[i]!=s2[j])
		{
			if(flag){
				return false;
			}
			flag=true;
		}
		i++;
		j++;

	}
	return true;
}

//one insert away
bool insert(string s1, string s2){
	bool flag=false;
	int l1=s1.size();
	int l2=s2.size();

	int i=0,j=0;

	while(i<l1 && j<l2){
		if(s1[i]!=s2[j]){
			if(!flag){
				flag=true;
				j++;
			}
			else return false;
		}
		else {
			i++;
			j++;
		}
	}
	return true;

}
void solve(){
	string s1,s2;
	cin>>s1>>s2;
	if(s1.size()==s2.size())cout<<((replace(s1,s2))?"yes":"no");
	else if(s1.size()<s2.size())cout<<((insert(s1,s2))?"yes":"no");
	else cout<<(insert(s2,s1)?"yes":"no");
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