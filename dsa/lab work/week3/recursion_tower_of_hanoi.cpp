#include<iostream>
using namespace std;

void tower(int n, char s, char d, char a){
	if(n==0){
		return;
	}
	if(n==1){
		cout<<"Move from "<<s<<" to "<<d;
	}
	else{
		tower(n-1,s,a,d);
		cout<<" Move from "<<s<<" to "<<d<<endl;
		tower(n-1,a,d,s);
	}
}



int main(){
	int n;
	cout<<"ENTER THE NUMBER OF DISK :";
	cin>>n;
	tower(n,'A','B','c');
	
	return 0;
}
