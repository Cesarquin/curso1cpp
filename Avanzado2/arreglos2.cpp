#include<iostream>
using namespace std;
main()
{
	int A[10];
	cout<<"Ingrese 4 valores:\n";
	for(int i=0;i<=4;i++)
	{
		cin>> A[i];
	}
	cout<<"El vector ingresado es:\n";
	cout<<"[";
	for(int i=0;i<=4;i++)
	{
		cout<< A[i] <<"; ";
	} cout<<"]"<<endl;
}


