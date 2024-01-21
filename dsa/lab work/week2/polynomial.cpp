#include<iostream>
using namespace std;
struct polynomial{
	int degree;
	int coff[100];
};
 void inputpoly(polynomial &poly){
 	cout<<"Enter the highest degrees of the polynomail :";
 	cin>>poly.degree;
 	
 	cout<<"Enter the coefficient from highest to lowest :";
 	for(int i=poly.degree;i>=0;i--){
 		cin>>poly.coff[i];
	 }
 }

void display(polynomial &poly){
	for(int i=poly.degree;i>0;i--){
		cout<<poly.coff[i]<<"x^"<<i<<" + ";
	}
	cout<<poly.coff[0]<<endl;
	
}
polynomial addpoly(polynomial &poly1, polynomial &poly2){
	polynomial result ;
	result.degree= max(poly1.degree ,poly2.degree);
	for(int i= result.degree;i>0;i--){
		result.coff[i]= poly1.coff[i] + poly2.coff[i];
	}
	result.coff[0]=poly1.coff[0] + poly2.coff[0];
	return result;
}




int main(){
	polynomial poly1,poly2, result;
//	cout<<"Enter the degrees of both polynomial :";
	cout<<"Enter the first polynomial :"<<endl;
	inputpoly(poly1);
	cout<<"Enter the second polynomial :"<<endl;
	inputpoly(poly2);
	
	cout<<"the first polynomial :"<<endl;
	display(poly1);
	cout<<"the second polynomial :"<<endl;
	display(poly2);
	cout<<"the sum of  polynomial :"<<endl;
	result= addpoly(poly1 ,poly2);
	display(result);
	
}

