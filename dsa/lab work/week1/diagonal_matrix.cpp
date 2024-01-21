#include<iostream>
using namespace std;

int main(){
	int arr[20][20],r,c;
	int arr1[20];
	int arr2[20];
	cout<<"enter the row and column :";
	cin>>r>>c;
	if(r==c){
		cout<<"enter "<<r<<" elements.";
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==j){
					cin>>arr[i][j];
					
				}
				else
				arr[i][j]=0;
			}
		}
	
	for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<arr[i][j]<<" ";
				
				
			}
			cout<<endl;
			}
	cout<<"converting matrix in 1D by row major "<<endl;
	for(int i=0;i<r;i++){
		arr1[i]= arr[i][i];
	}
	for	(int i=0;i<r;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	cout<<"converting matrix in 1D by column major "<<endl;
	for(int j=0;j<c;j++){
		arr2[j]= arr[j][j];
	}
	for	(int j=0;j<r;j++){
		cout<<arr2[j]<<" ";
	}
	cout<<endl;
	
	cout<<"\n enter the index: ";
	int i,j;
	cin>>i>>j;
	if(i>r && j>c){
		cout<<"enter the proper index ";
	}
	else
	{
		cout<<"ofset by row major :";
		int rowofset=0;
		rowofset= (i*c)+j;
		cout<<rowofset<<endl;
		cout<<"ofset by col major :";
		int colofset=0;
		colofset= (j*c)+i;
		cout<<colofset<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
			
}
else{
	cout<<"enter the square matrix.";
}
}

