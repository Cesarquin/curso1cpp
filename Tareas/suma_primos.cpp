// suma los primos anteriores a un n�mero definido por usuario:

/*  OJO NO FUNCIONA AUN...    */
#include<iostream>
using namespace std;
main()
{
	int m, i=3, j, suma=0;
	cout<<"Ingrese numero: "<<endl; cin>>m; // usuario ingresa n�mero.
	while(m>2)
	{
		suma=2;
		for(j=2;j<=m;j++)  // i=3  m=11 j=4
		{
				if((i % j != 0)&(i>j))  //
				{suma=suma+i; i++;}     // suma=5    i=3
				
		}
		m=0;
		cout<<suma;
	}
}


