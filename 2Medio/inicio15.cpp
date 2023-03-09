#include<iostream>
using namespace std;
main()
{
	char a[30], b[30]; // crear el arreglo.
	// *******************
	// tomar lectura de la cadena de caracteres en C:
	printf("Escriba cadena de caracteres:\n"); // info al usuario
	fgets(a,31,stdin); 	// tomar el (los) dato(s) con función get (requiere llamar una libreria)
	// se imprimen los caracteres ingresados:
	printf("%s \n",a);
	// *******************
	// Toma de datos con lenguaje C++:
	cout<<"Escriba la cadena de caracteres:\n"<<endl;
	cin.getline(b,30);
	// muestra los caracteres ingresados:
	cout<<b<<endl;
} 


