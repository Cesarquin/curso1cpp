/* Arreglos:
Problema: Escribir un programa que defina 
.  		  si un número es simetrico o no.

Solución:
*/
#include<iostream>
using namespace std;
main()
{
	int v[100], n, r, m, i=1;
	cout << "Escriba el numero a ser comparado:\n";
	cin >> m;  //
	while(m != 0)
	{
		r = m % 10;
		m = m / 10;
		v[i] = r;
		n = i;
		i++;
	}
// ***********************************
	bool s=true;
	for(int i=1;i<=n/2 && s;i++)
	{
		if(v[i] != v[n-i+1]) 
			{s = false; cout << "El numero no es simetrico." <<endl;}
		else
			cout << "HAY SIMETRIA!!!" <<endl;
	}
}




