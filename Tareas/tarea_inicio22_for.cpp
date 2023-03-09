/*
While salia del ciclo cuando el ususario lo permitiera y para conteo
inicio
While(fin)
	{
		//inicio
		....	
		incremento
	}

for(inicio;fin;incremento)
*/

#include<iostream>
using namespace std;
main()
{
	int m,j=1,i,A;
	cout<<"Ingrese numero:\n"; cin>>m; // linea puede omitirse si se cambia la variable 'm' por 'A'
	for(A=0;A<=1;A=m)
	{
		cout<<"Ingrese un numero positivo:\n";
		cin>>m;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}


















