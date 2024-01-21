#include<iostream>
using namespace std;
struct sparse{
        int row;
        int col;
        int value;
};

int main(){
        int arr2d[10][10],r,c;
        int countzero=0;
        int countvalue=0;
        cout<<"enter the number of rows :";
        cin>>r;
        cout<<"enter the number of column :";
        cin>>c;
        cout<<"enter the elemnets :";

        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        cin>>arr2d[i][j];}}
        cout<<"matrix :---------------"<<endl;
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        cout<<arr2d[i][j]<<" ";}
                cout<<endl;
        }
 for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        if(arr2d[i][j]==0){
                                countzero++;
                        }
                        else
                                countvalue++;
                }
        }
 sparse val[countvalue+1];
 int k=1;
 val[0].row= r;
 val[0].col=c;
 val[0].value= countvalue;
 for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
                 if(arr2d[i][j]!=0){
                         val[k].row=i;
                         val[k].col=j;
                         val[k].value=arr2d[i][j];
                         k++;
                 }

         }}
 cout<<"sparse matrix-------------------"<<endl;
        for(int i=0;i<countvalue+1;i++){
 cout<<val[i].row<<" "<<val[i].col<<" "<<val[i].value<<endl;
}
int recreatematrix[10][10] ={0};
for(int i=0;i<countvalue+1;i++){
	recreatematrix[val[i].row][val[i].col]= val[i].value;
}
cout<<"recreated matrix from sparse matrix"<<endl;
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		cout<<recreatematrix[i][j]<<"  ";
	}
	cout<<endl;
}

 }
