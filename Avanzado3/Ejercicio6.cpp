/*
Reaizar la traspuesta de una matriz:

SOLUCIÓN:
*/
#include<iostream>
using namespace std;
main()
{
	float a[10][10], b[10][10];
	int i, j, n=3;
	// INGRESA VALORES DE LA MATRIZ A:
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << "\nIngrese el valor de la pos. " << i << ", " << j << " :";
			cin >> a[i][j];
		}
	}
	// TRASPUESTA DE LA MATRIZ:
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	// VISUALIZA LOS VALORES DE LA MATRIZ RESULTANTE 'C':
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}


	
}






