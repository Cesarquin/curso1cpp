#include<iostream>
using namespace std;
void lee(float a[],int n) // Función que ingresa los datos de un arreglo.
{
		for(int i=0;i<n;i++)
	{
		cout << "Ingrese dato " << i+1 << " del arreglo: ";
		cin >> a[i];
	}
}
void escribe(float a[], int n)	// función que muestra los datos de los arreglos en pantalla.
{
	for(int i=0;i<n;i++)
		cout << a[i] << "\t"; 
	cout << endl;
}
void suma(float a[], float b[], float c[], int n) // función que tiene como parámentros 
{													// de entrada, arreglos.
	for(int i=0;i<n;i++)
	{
		c[i] = a[i] + b[i];
	}
}
main()
{
	int n=3;
	float x[10], y[10], z[10];
	
	lee(x,n);
	lee(y,n);
	system("CLS");
	escribe(x,n);
	escribe(y,n);
	cout << "A continuacion se muestra la suma de cada uno de los elementos:\n";
	suma(x,y,z,n);
	escribe(z,n);
}






