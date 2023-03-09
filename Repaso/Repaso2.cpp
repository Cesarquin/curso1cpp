/* REPASO:
PROBLEMA 2:
Escribir un programa que calcule y visualice el valor
1 + 2 + 3 + ... + (n-1) + n, donde n es un valor positivo 
ingresado por el usuario:

SOLUCIÓN: 
*/
#include<cstdlib>
#include<iostream>
using namespace std;
main()
{
	char S='S';
	while(S=='S')
	{
		int n=0, i=1, suma=0;
		while(n<=0)
		{
			cout << "Ingrese valor de la sumatoria:\n";
			cin >> n;
		}
		while(i<=n) // for(i=1;i<=n;i++)
		{
			suma = suma + i; // suma += i;
			i++;
		}
		cout << "El valor de la sumatoria es: " << suma << endl;
		cout << "Desea continuar? S/N. \n"; 
		cin >> S;
		system("CLS");
	}
}





