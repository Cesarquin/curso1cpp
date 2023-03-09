#include<iostream>
using namespace std;
main()
{
	int a, b, c;
	printf(" A continuacion digite tres numeros:\n");
	scanf("%i%i%i",&a,&b,&c);
	// si (a es mayor que b) y (b es mayor que c), imprime a, b, c;
	// si a es menor que b y b es menor que c, imprime c, b, a;
	// si a es menor que b y c es mayor que a, imprime b, c, a:
	if((a>b)&(b>c))
		printf("%i  %i  %i\n",a,b,c);
	else if (a<b&b<c)
	{	printf("%i  %i  %i\n",c,b,a);	}
	else if((a<b)&(c>a))
		printf("%i  %i  %i\n",b,c,a);
	else
		printf("Este orden no esta establecido.\n");
	
}
//  TAREA PARA ENTREGAR A LA 1 p.m.
//  ingrese 2 notas. 
//	si una de las notas es menor a 2, imprima indicando esa situación.
//  si una de las notas es mayor a 4, imprima con felicitacón por esa nota.
//	imprima la situación por defecto.
