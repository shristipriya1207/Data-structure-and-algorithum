#include<iostream>
using namespace std;

int fab(int n){
	
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	 return fab(n-1) + fab(n-2);
	 
}



int main(){
	int n;
	cout<<"Enter a number to find the fiboancci ";
	cin>>n;
	int result = fab(n);
	cout<<" The fibanocci of "<<n<<" is "<<result;
	return 0;
	
}
