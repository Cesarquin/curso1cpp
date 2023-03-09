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
	int i, j, n=3, im, jm;
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
	// PUNTO DE SILLA.
	i=1;
	mayor = a[1][1]; // asumiendo que el mayor valor es 1,1.
	for(j=1;j<=n;j++)
	{	
		if((mayor < a[i][j])&&(a[i-1][j-1] <= a[i][j]))
		{
			mayor = a[i][j];
			jm=j;
			for(i=1;i<=n;i++)
			{
				if(mayor >= a[i][jm])
				{	mayor = a[i][jm];
					im=i;
				}
					
			}
		}
	}
	cout<<"Punto de silla en:\n";
	cout<<"Fila: "<< im <<"\nColumna: "<<jm<<"\nValor: "<<mayor;
}










