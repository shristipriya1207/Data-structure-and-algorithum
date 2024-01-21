#include<iostream>
using namespace std;
int main(){
	int arr2d[10][10],r,c;
	int arr1[10];
	int arr2[10];
	cout<<"enter the numbers of rows and cols .";
	cin>>r>>c;
	cout<<"enter the "<<(r*(r+1)/2)<<" elements.";
	if(r==c){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i>=j){
					cin>>arr2d[i][j];
				}
				else{
					arr2d[i][j]=0;
				}
			}
		}
		cout<<"upper triangle "<<endl;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<arr2d[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"converting to 1d matrix row major "<<endl;
		int len =0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(i>=j){
					arr1[len]=arr2d[i][j];
					len++;
				}
			}
		}
		for(int i=0;i<(r*(r+1)/2);i++){
			cout<<arr1[i];
			cout<<" ";
		}
		cout<<endl;
		cout<<"converting to 1d matrix col major "<<endl;
	 len = 0;
        for (int j = 0; j < c; j++)
        {
            for (int i = 0; i < r; i++)
            {
                if (j<=i)
                {
                    arr2[len] = arr2d[i][j];
                    len++;
                }
            }
        }
		 for (int i = 0; i < (r * (r + 1) / 2) ; i++)
        {
            cout << arr2[i];
            cout << " ";
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
            rowOfset =  (i*(i+1)/2+j);
            cout << rowOfset << endl;
        }
    }
    else
    {
        cout << "Enter a square matrix only.";
    }
}
