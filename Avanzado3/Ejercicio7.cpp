/*
Hallar el determinante de una matriz.

SOLUCIÓN:
*/
#include<iostream>
using namespace std;
main()
{
	float a[10][10], b[10][10], p, cte, D;
	int i, j, k, n=3;
	// INGRESA VALORES DE LA MATRIZ A:
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << "\nIngrese el valor de la pos. " << i << ", " << j << " :";
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}
	// OBTENCIÓN DE MATRIZ TRIANGULAR SUPERIOR:
	for(i=1;i<=n;i++)
	{
		p = b[i][i];
		for(j=i+1;j<=n;j++)
		{
			cte = b[j][i] / p;
			for(k=1;k<=n;k++)
			{
				b[j][k] = b[j][k] - cte * b[i][k];
			}
		}
	}
	// VISUALIZA LOS VALORES DE LA MATRIZ RESULTANTE 'B':
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}
	// MULTIPLICACIÓN VALORES DE LA DIAGONAL PRINCIPAL:
	D = 1;
	for(i=1;i<=n;i++)
	{
		D *= b[i][i];
	}
	cout << "El determinante es: " << D <<endl;
}




