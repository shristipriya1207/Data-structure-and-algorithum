#include<iostream>
using namespace std;
int gcd(int m ,int n){
if(n==0){
	return m;
	
}
if(m==0){
	return n;
}
return gcd(n, m%n);	
}
int main(){
	int a,b;
	cout<<"enter the first number ";
	cin>>a;
	cout<<"enter the second number ";
	cin>>b;
	int result = gcd(a,b);
	cout<<"the gcd of "<<a<<" and "<<b<<" is "<<result;
	return 0;
}
