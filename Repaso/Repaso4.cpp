/* REPASO:
PROBLEMA 4:
Escribir un programa que produzca la siguiente salida:
ZYXWVUT....CBA
YXWVUT....CBA
XWVUT....CBA
...
BA
A

SOLUCIÓN:
*/
#include<iostream>
using namespace std;
main()
{
	char car, comi = 'Z';
	
	for(comi = 'Z';comi >= 'A';comi--)
	{
		for(car = comi;car >= 'A';car--)
		{
			cout << car;
		}
		cout << endl;
	}
	
}



