/*REPASO:
PROBLEMA 6:
Determinar si un número ingresado por el usuario es 
primo o no.

SOLUCIÓN:
*/
#include<iostream>
using namespace std;
main()
{
	int numero, contador;
	cout << "Ingrese digito positivo entero: \n";
	cin >> numero;
	bool primo = true;
	
	for(contador=2;(contador*contador <= numero)&primo;contador++)
	{
		primo = numero % contador != 0;
	}
	
	if (primo)
		cout << "El numero es primo.\n";
	else
		cout << "El numero no es primo.\n";
	
}


