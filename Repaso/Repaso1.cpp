/* REPASO:
PROBLEMA 1:
Escriba un programa que visualice la siguiente 
tabla:
1
1	2
1	2	3
1	2	3	4
1	2	3
1	2
1
SOLUCIÓN:
*/
#include<iostream>
using namespace std;

main()
{
	int i, j, m;
	while(m <= 0)
	{	cout << "Ingrese valor mayor que cero:\n";
		cin >> m;
	}
	// ciclo de incremento de conteo:
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{	cout << j << "\t";	}
		cout << endl;
	}
	// ciclo de decremento:
	for(i=m-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{	cout << j << "\t";	}
		cout << endl;
	}
	
}










