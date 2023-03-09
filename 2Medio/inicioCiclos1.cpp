#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float funexp=1, n, term=1;
	int x=1, t=45;        
	for(n=1;n<=10;n++)
	{
		term=term*x/n;
		funexp+=term;
	}
	cout<<funexp<<endl;
	cout<<exp(x)<<endl; // funcion exp de la libreria math.h
	cout<<sin(3.14/4)<<endl; // función seno de la libreria math.h
	cout<<sin(t*3.14/180)<<endl; // conversión de radianes a grados
}

/* TAREA: implemente para la función seno 

pi=3.14  -> 180
#  		->  ?



*/



