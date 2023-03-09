/* Arreglos R2:
Problema: Escribir un program que encuentre el 
punto de silla de una matriz.

Solución:
*/
#include<iostream>
using namespace std;
main()
{
	float a[10][10], mayor;
	int i, j, n=3, im;
	bool correcto;
	// INGRESA VALORES DE LA MATRIZ:
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << "\nIngrese el valor de la pos. " << i << ", " << j << " :";
			cin >> a[i][j];
		}
	}
	// VISUALIZA LOS VALORES DE LA MATRIZ:
	for(i=1;i<=n;i++) // Cuenta las filas
	{
		for(j=1;j<=n;j++) // cuenta las columnas
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	cout<<"Punto de silla\n";
	// PUNTO DE SILLA.
	i=1;
	mayor = a[1][1];
	for(j=1;j<=n;j++)
	{	
		if(mayor < a[i][j]) //?si... salta entre filas, no compara con la sig pos col
		{
			mayor = a[i][j];
			for(i=1;i<=n;i++)
			{
				if(mayor >= a[i][j])
					mayor = a[i][j];
				
			}
		}
		
	} cout<<"silla en: "<<mayor;
}










