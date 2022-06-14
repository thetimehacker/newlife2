#include<bits/stdc++.h>
using namespace std;

//creating a basic vector template
//--can be used to declare a vector of n size
//--can be used to make a copy of another vector
template<class T> 
class vect{
	//one pointer of type T
	T* v;
	int size;

public:

	vect(int s){
		v=new T[size=s];
		//also initializing every element to 0
		for(int i=0;i<s;i++){
			v[i]=0;
		}
	}

	vect(int s, int ini){
		v=new T[size=s];
		for(int i=0;i<size;i++){
			v[i]=ini;
		}
	}
	//copying a vector
	vect(T* a){
		for(int i=0;i<size;i++){
			v[i]=i*a[i];
		}
	}

	void printvect(){
		// cout<<"printing vector from inside the class : ";
		for(int i=0;i<size;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
};
void solve(){
	vect<int> a(5,5);
	vect<int> b(5); //creating a vector b with size 5
	b=a;
	cout<<"printing vector A : ";
	a.printvect();
	cout<<"printing vector B : ";
	b.printvect();

}
int main(){
	solve();
}