#include<iostream>
using namespace std;
int minimo(int x, int y)  // Creaci�n o declaraci�n de la funci�n
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
	// Informaci�n al usuario e ingreso de los valores a comparar.
	cout<<"Este programa entrega el menor de dos numeros"<<endl;
	cout<<"Ingrese cada numero seguido de 'Intro'. \n";
	cin >> x >> y;
	// Comparaci�n:
	minimo(x, y);	//llamado a la funcion

}



