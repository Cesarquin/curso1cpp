#include<iostream>
using namespace std;
main()
{
	char nombre[20];
	// ingresar el nombre:
	printf("Ingrese nombre y apellido.\n");
	scanf("%[^\n]s",&nombre); 
	// mostrar nombre ingresado en pantalla:
	printf("El nombre ingresado es: %s\n",nombre);
}


