/*REPASO:
PROBLEMA 5:
Calcular la suma de la serie 1/x^3: 1/1^3+1/2^3+...+1/n^3
donde n es el número positivo que introduce el usuario.

SOLUCIÓN:
*/
#include<iostream>
using namespace std;
main()
{
	float termino=0, suma=0;
	int n;
	cout << "Introduzca un digito entero positivo:"<<endl;
	cin >> n;
	
	for(int i=1;i<=n;i++)
	{
		termino = 1.0/(i*i*i);
		suma += termino;
		cout << suma << endl;
	}
	cout << "El resultado: " << suma << endl;
}


