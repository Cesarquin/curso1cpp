#include <iostream>
using namespace std;
main()
{
  unsigned int resto, numero, invertido = 0;

    cout << " introduzca valor del numero :";cin>>numero;
  
  for (numero; numero != 0; numero /= 10)  // numero /= 10   numero=numero/10
  {	
    resto = numero % 10;
    invertido = invertido * 10 + resto;
  }
  cout <<" numero invertido : " << invertido << endl;
  
}
/* Tarea no calificable:
1. programa que haga la sumatoria de un número.
		n=9
		sum=1+2+3+4+5+6+7+8+9=
		prod=1*2*3*4*5*6*7*8*9=

2. programa que haga la sumatoria de los números primos anteriores al
	número ingresado. 
		n=6
		sum=1+2+3+5=
	
*/
