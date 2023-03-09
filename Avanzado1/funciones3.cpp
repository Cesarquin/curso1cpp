#include<iostream>
#include<math.h>
using namespace std;
float dist(float x,float y,float z)	// declaración de función distancia euclidea
{
	return sqrt(x*x + y*y + z*z);
}
main()
{
	float x,y,z;
	cout<<"El programa entrega la norma Euclidea de un vector en R3.\n";
	cout<<"Ingrese el valor de x: ";
	cin>> x;
	cout<<"Ingrese el valor de y: ";
	cin>> y;
	cout<<"Ingrese el valor de z: ";
	cin>> z;
	cout<<"La distacia euclidea del vector es:\n" << dist(x,y,z) << endl;
}



