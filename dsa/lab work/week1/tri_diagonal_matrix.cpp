#include<iostream>
using namespace std;
int main(){
	int arr2d[20][20],r,c;
	int arr1[20];
	int arr2[20];
	cout<<"Enter the row and column :";
	cin>>r>>c;
	cout<<"enter the "<<3*r-2<<" elements"<<endl;
	if(r==c){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==j || i==j+1 || i==j-1){
					cin>>arr2d[i][j];
				}
				else{
					arr2d[i][j]=0;
				}
			}
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<arr2d[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"converting to 1-d matrix row major order "<<endl;
		int len =0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i==j || i==j+1 || i==j-1){
					arr1[len]= arr2d[i][j];
					len++;
				}
			}
		}
		for(int i=0;i<(3*r-2);i++){
			cout<<arr1[i]<<" ";
		}
		cout<<endl;
		
		cout<<"converting to 1_d matrix col major order "<<endl;
		len =0;
		for(int j=0;j<c;j++){
			for(int i=0;i<r;i++){
				if(i==j || i==j+1 || i==j-1){
					arr2[len]= arr2d[i][j];
					len++;
				}
			}
		}
		for(int i=0;i<(3*r-2);i++){
			cout<<arr2[i]<<" ";
		}
		cout<<endl;
	cout << "\nEnter the index: ";
        int i, j;
        cin >> i;
        cin >> j;
        if (i > r && j > c)
        {
            cout << "\nEnter the proper index: ";
        }
        else
        {
            cout << "Ofset by row major: ";
            int rowOfset = 0;
            rowOfset = 2 * i + j;
            cout << rowOfset << endl;
        }	
	}
	else
    {
        cout << "Enter a square matrix only.";
    }
    return 0;
}
