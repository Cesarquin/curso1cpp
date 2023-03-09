#include<iostream>
using namespace std;
int x, y;
int minimo(int x, int y);
main()
{
	int z;
	// Información al usuario e ingreso de los valores a comparar.
	cout<<"Este programa entrega el menor de dos numeros"<<endl;
	cout<<"Ingrese cada numero seguido de 'Intro'. \n";
	cin >> x >> y;
	// Comparación:
	z = minimo(x, y);
	cout<<"El valor minimo es: " << z <<endl;	//llamado a la funcion

}
int minimo(int x, int y)  // Creación o declaración de la función
{
	if(x<y)
		return x;
	else
		return y;
}


