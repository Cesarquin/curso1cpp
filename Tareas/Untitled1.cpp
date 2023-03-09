// Programa que determina si un número es primo o no.
#include <iostream>
using namespace std;
main()
{
	int primo, contador, numero;
	cout<< "valor de  n >0\n";
	cin >> numero;
	primo = true;				//inicialmente el número es primo
	for (contador = 2;(contador*contador <= numero) & primo; contador++) // mientras sea primo y queden posibles divisores menores o iguales   
	{
		primo = (numero % contador) != 0;    	// primo es false si contador divide a numero
	}
	if ( primo )
    cout <<" el numero " << numero << " es primo\n" ;
    else
    cout <<" el numero " << numero << " no es primo \n";

}

