/* 
*************EJECUCIÓN:****************
1
1	2
1	2	3
************ALGORITMO:*****************
variables: m, j, i.
m=valor digitado. m=3
	j=1; i=1
	imprimir 1 (j=1)(i=1)
		0 tab (j<=i)
salto de linea (i<=m)(i=2)(j=1)
	imprimir 1 (imprimir j y tab)
		tabulado (j++)
	imprimir 2
salto de linea (i=3)(j=1)
	imprimir 1 (imprime j y tab)
		tabulado
	imprimir 2
		tabulado
	imprimir3 (j<=i)
salto de linea
fin
*************PSEUDOCÓDIGO:***************
int m,j=1,i=1;
cout<<"Ingrese numero:\n"; cin>>m;
	cout<<j<<"\t";j++; 			// j<=i?
	i++; j=1;		//i=2; j=1;
cout<<"\n";
	cout<<j<<"\t";j++; 			// j=2 j<=i?
	cout<<j<<"\t";j++; 			// j=3 j<=i?
cout<<"\n";
	cout<<j<<"\t";j++; 			// j=2 j<=i?
	cout<<j<<"\t";j++; 			// j=3 j<=i?
	cout<<j<<"\t";j++; 			// j=4 j<=i?
cout<<"\n";
*************CÓDIGO:***************
*/
#include<iostream>
using namespace std;
main()
{
	int m,j,i;
	int A=0;
	while(A!=1)
	{
			j=1;i=1;
			cout<<"Ingrese numero:\n"; cin>>m;
		while(m<=0)
		{
			cout<<"Ingrese un numero positivo:\n";cin>>m;
		}
		while(i<=m)
		{
			while(j<=i)
			{
				cout<<j<<"\t";j++;
			}
			cout<<"\n";i++;j=1;
		}
		cout<<"Digite 1 si quiere salir: ";cin>>A;
		system("CLS");
	}
	
}






















