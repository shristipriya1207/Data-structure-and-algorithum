#include <iostream>
using namespace std;
const int ROWS=3;
const int COLS=3;
void convertToDiagonal( int arr2d1[][COLS],int diagonalArr[], int rows, int cols){
	 int index=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==j){
				diagonalArr[index++]= arr2d1[i][j];
//				index++;
			}
		}
	}
}
void convertTotriDiagonalArr ( int arr2d2[][COLS], int triDiagonalArr[],int rows,int cols){
	 int index=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i == j || i == j + 1 || i == j - 1){
				triDiagonalArr[index]= arr2d2[i][j];
				index++;
			}
		}
	}
}

void convertToupperTriangleArr (int arr2d3[][COLS], int upperTriangleArr[], int rows, int cols){
	 int index=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i<=j){
				upperTriangleArr[index]= arr2d3[i][j];
				index++;
			}
		}
	}
}

void convertTolowerTriangleArr ( int arr2d4[][COLS],int lowerTriangleArr[], int rows, int cols){
	 int index=0;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i>=j){
				lowerTriangleArr[index]= arr2d4[i][j];
				index++;
			}
		}
	}
}

int main() {

	int arr2d1[ROWS][COLS]= {
	{1,0,0},
	{0,5,0},
	{0,0,9}
	};
		int arr2d2[ROWS][COLS]= {
	{1,2,0},
	{4,5,6},
	{0,8,9}
	};
		int arr2d3[ROWS][COLS]= {
	{1,2,3},
	{0,5,6},
	{0,0,9}
	};
		int arr2d4[ROWS][COLS]= {
	{1,0,0},
	{4,5,0},
	{7,8,9}
	};
	int diagonalArr[ROWS*COLS];
	int triDiagonalArr[ROWS*COLS];
	int upperTriangleArr[ROWS*COLS];
	int lowerTriangleArr[ROWS*COLS];
	 
	convertToDiagonal(arr2d1, diagonalArr, ROWS, COLS);
	convertTotriDiagonalArr(arr2d2, triDiagonalArr, ROWS, COLS);
	convertToupperTriangleArr(arr2d3,upperTriangleArr, ROWS, COLS);
	convertTolowerTriangleArr(arr2d4,lowerTriangleArr, ROWS, COLS);
	  
	cout << "Diagonal Matrix (1D representation): ";
    for (int i = 0; i <ROWS*COLS; ++i) {
        cout << diagonalArr[i] << " ";
    }
    cout << endl;
    cout << "Tri Diagonal Matrix (1D representation): ";
    for (int i = 0; i <ROWS*COLS; ++i) {
        cout << triDiagonalArr[i] << " ";
    }
    cout << endl;
    cout << " Upper Matrix (1D representation): ";
    for (int i = 0; i <ROWS*COLS; ++i) {
        cout << upperTriangleArr[i] << " ";
    }
    cout << endl;
    cout << "Lower Matrix (1D representation): ";
    for (int i = 0; i <ROWS*COLS; ++i) {
        cout << lowerTriangleArr[i] << " ";
    }
    cout << endl;
	  
	  
	
	return 0;
}
