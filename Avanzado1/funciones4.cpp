#include<iostream>
#include<math.h>
using namespace std;
float dist(float x,float y,float z);   //  Declaración. Prototipo.
main()
{
	float x,y,z;
	cout<<"El programa entrega la norma Euclidea de un vector en R3.\n";
	cout<<"Ingrese el valor de x, y, z, seguidos de la tecla 'Enter':\n";
	cin>> x >> y >> z;
	cout<<"La distacia euclidea del vector es:\n" << dist(x,y,z) << endl; // Lllamado.
}
float dist(float x,float y,float z)		// Definición.
{
	return sqrt(x*x + y*y + z*z);
}



