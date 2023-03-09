/* Arreglos:
Problema: Escribir un programa que defina 
.  		  si un arreglo (vector) es simetrico o no.

Solución:
*/
#include<iostream>
using namespace std;
main()
{
	int v[100], n;
	cout << "Escriba el tamanio del arreglo:\n";
	cin >> n;  // n=3
	for(int i=1;i<=n;i++) // i=0,i=1, i=2, i=3
	{
		cout << "Ingrese el numero de la posicion " << i << " :\n";
		cin >> v[i];  // v[0], v[1], v[2]
	}
/*	
	v[0] v[n-1]			v[1] v[n]
	v[1] v[n-2]			v[2] v[n-1]
	v[2] v[n-3]			v[3] v[n-2]
	v[3] v[n-4]			....
	....				v[i] v[n-i+1]
	v[i] v[n-i-1]
*/	bool s=true;
	for(int i=1;i<=n/2 && s;i++)
	{
		if(v[i] != v[n-i+1]) 
			{s = false; cout << "El numero no es simetrico." <<endl;}
		else
			cout << "HAY SIMETRIA!!!" <<endl;
	}
}




