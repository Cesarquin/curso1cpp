// encabezado:
#include<iostream>
#define pi 3.1416 // definir una costante.
using namespace std;
float m=9; // definir una variable global.
// cod principal:
main()
{
	float P=9; // variable local
	printf("%4.4f \n",pi);
	m=P+3;
	printf("%f",m);
}

