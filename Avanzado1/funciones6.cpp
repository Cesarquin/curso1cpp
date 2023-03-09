#include<iostream>
using namespace std;
int funcion(int pepe)
{
	cout<<"El valor de 'pepe' dentro de la 'funcion' es: "<< pepe <<endl;
	system("PAUSE");
	return pepe*pepe;
}
main()
{
	int x, y;
	x=2;
	cout<<"El valor de 'x' en el main antes de la 'funcion' es: "<< x <<endl;
	system("PAUSE");
	y=funcion(x);
	cout<<"El valor de 'x' en el main despues de la 'funcion' es: "<< x <<endl;
	system("PAUSE");

	cout<< " el valor al cuadrado es: "<< funcion(x) <<endl;
}


