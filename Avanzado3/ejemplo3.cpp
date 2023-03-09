/* Arreglos tipo matriz.
Problema: Ingresar valores en una matriz n x n,
.		  y visualizarlos.

Solución:
*/
#include<iostream>
using namespace std;
main()
{
	float a[10][10];
	int i, j;
	for(i=1;i<=3;i++) // Cuenta las filas
	{
		for(j=1;j<=3;j++) // cuenta las columnas
		{
			cout << "\nIngrese el valor de la pos. " << i << ", " << j << " :";
			cin >> a[i][j];
		}
	}
	for(i=1;i<=3;i++) // Cuenta las filas
	{
		for(j=1;j<=3;j++) // cuenta las columnas
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}

