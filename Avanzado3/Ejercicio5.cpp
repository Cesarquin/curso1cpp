/*
El siguiente programa realiza la multiplicación entre matrices.

SOLUCIÓN:
*/
#include<iostream>
using namespace std;
main()
{
	float a[10][10], b[10][10], c[10][10], mayor;
	int i, j, n=3, m, im, jm;
	bool correcto;
	// INGRESA VALORES DE LA MATRIZ A:
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << "\nIngrese el valor de la pos. " << i << ", " << j << " :";
			cin >> a[i][j];
		}
	}
	// INGRESA VALORES DE LA MATRIZ B:
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << "\nIngrese el valor de la pos. " << i << ", " << j << " :";
			cin >> b[i][j];
		}
	}
	// MULTIPLICACIÓN ENTRE MATRICES:
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(int k=1;k<=m;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	// VISUALIZA LOS VALORES DE LA MATRIZ RESULTANTE 'C':
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << c[i][j] << "\t";
		}
		cout << "\n";
	}

}














