#include<iostream>
using namespace std;
void triangulo(float base, float altura)
{
	cout<< "El area es: "<< base*altura/2 <<endl;
	system("PAUSE");
}
main()  // Programa que entrega el área de un triangulo.
{
	// declaración de variables:
	float base, altura;
	// solicitud de datos de entrada:
	cout<<"Ingrese la base:\n";
	cin>> base;
	cout<<"Ingrese la altura:\n";
	cin>> altura;
	// Operaciones del programa:
	triangulo(base, altura);
	// Mensaje de terminación
	cout<< "En este momento ya se ejecuto la funcion.\n";
	system("PAUSE");
}




