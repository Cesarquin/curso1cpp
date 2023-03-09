#include<iostream>
using namespace std;
int minimo(int x, int y)  // Creación o declaración de la función
{
	if(x<y)
		cout<<"El menor de los numeros es: " << x  <<endl;
	else
		cout<<"El menor de los numeros es: " << y  <<endl;
	//return;
}
main()
{
	int x, y;
	// Información al usuario e ingreso de los valores a comparar.
	cout<<"Este programa entrega el menor de dos numeros"<<endl;
	cout<<"Ingrese cada numero seguido de 'Intro'. \n";
	cin >> x >> y;
	// Comparación:
	minimo(x, y);	//llamado a la funcion

}



