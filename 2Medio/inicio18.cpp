/*
ESTRUCTURAS DE CONTROL:
- IF(ELSE)-SWITCH: permite omitir lineas de programación
	SI HAY DE POLLO ENTONCES TRAIGA 5
	=si(CONDICIÓN,VERDADERA,FALSA)
	P->Q
	///   	if (HAY DE POLLO)
.			(TRAIGA 5)
.			(SE DEVUELVE COMO EL PERRO ARREPENTIDO) ////

	///   	if (HAY DE POLLO Y HAY MAS DE 5)
.			{	(TRAIGA 5 E POLLO)
.				(TRAIGA 5 GASEOSAS)
.			}
.			else (HAY 3 EMPADAS DE POLLO?)
.			{	(EMPAQUELAS VECINO!!!!) 
.				(TRAIGA 3 GASEOSAS CHINO!!!)}
.			(SE DEVUELVE COMO EL PERRO ARREPENTIDO) ////

- WHILE(DO)-FOR: ejecutar lineas de programación de forma repetida

*/

#include<iostream>
using namespace std;
main()
{
	int a, b, c;
	printf(" A continuacion digite tres numeros:\n");
	scanf("%i%i%i",&a,&b,&c);
	// si a es mayor que b, se imprime a,
	// si a es menor que b, se imprime b,
	// si a es igual a b, se imprime c:
	if(a>b)
	{	printf("El mayor valor es: %i\n",a);}
	else if(a<b)
	{	printf("El mayor valor es: %i\n",b);}
	else 
	{	printf("El valor de c es: %i\n",c);}
}

