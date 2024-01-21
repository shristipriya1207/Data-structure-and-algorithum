#include<iostream>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	
	return n * fact(n-1);
}



int main(){
	int n;
	cout<<"Enter a number to find the factorial :";
	cin>>n;
	int result = fact(n);
	cout <<"The factorial of "<<n <<" is "<<result;
	return 0;
	
}
