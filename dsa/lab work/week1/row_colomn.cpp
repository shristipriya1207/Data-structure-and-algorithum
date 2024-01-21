 #include <iostream>
 using namespace std;
 
 const int ROWS = 3;
 const int COLS = 3;
 
 void convertToRowMajor(int arr2d[][COLS], int arr1d[],int rows, int cols){
 	int index =0;
 	for(int i=0;i<rows;i++){
 		for(int j=0;j<cols;j++){
 			arr1d[index]= arr2d[i][j];
 			index++;
		 }
	 }
 }
 
 void convertToColMajor(int arr2d[][COLS], int arr1d[],int rows, int cols){
 	int index =0;
 	for(int i=0;i<rows;i++){
 		for(int j=0;j<cols;j++){
 			arr1d[index]= arr2d[j][i];
 			index++;
		 }
	 }
 }


int main() {
	int arr2d[ROWS][COLS]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int rowmajor[ROWS * COLS];
	int colmajor[ROWS * COLS];
	
	convertToRowMajor(arr2d, rowmajor ,ROWS ,COLS);
	convertToColMajor(arr2d,colmajor,ROWS,COLS);
	
	cout<<"ROW MAJOR REPRESENTATION :"<<endl;
	for(int i=0;i<ROWS*COLS;i++){
		cout<<rowmajor[i]<<" ";
	}
	cout<<endl;
	 
    cout<<"COLUMN MAJOR REPRESENTATION :"<<endl;
    for(int i=0;i<ROWS*COLS;i++){
    	cout<<colmajor[i]<<" ";
	}
	cout<<endl;
	 cout << "\nEnter the index:" << endl;
    int i, j;
    cin >> i >> j;
    if (i > ROWS && j > COLS)
    {
        cout << "\nYou entered wrong index" << endl;
    }
    else
    {
        cout << "Ofset by row major: " << endl;
        int rowOfset = 0;
        rowOfset = (i * COLS) + j;
        cout << rowOfset << endl;
        cout << "Ofset by Col major: " << endl;
        int colOfset = 0;
        colOfset = (j * ROWS) + i;
        cout << colOfset << endl;
    }
	
	return 0;
}
