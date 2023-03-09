/* REPASO:
PROBLEMA 3:
Escriba un programa que lea 10 números y 
cuente el número de entradas que 
son positivas, negativas y cero.

SOLUCIÓN:
*/
#include<iostream>
#define max 5
using namespace std;
main()
{
	int np=0, nn=0, nulos=0, dato;
	cout << "Senior usuario, ingrese " << max << " numeros que pueden ser negativos, positivos o nulos:\n";
	for(int i=1;i<=max;i++)
	{
		cin >> dato;
		if(dato > 0)
			np++;
		else if(dato < 0)
			nn++;
		else
			nulos++;
	}
	cout << "POSITIVOS | NEGATIVOS | NULOS\n";
	cout << "   " << np << "      |   " << nn << "       | " << nulos;
}




