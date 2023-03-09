#include<iostream>
#include"matematica.h"

using namespace std;
main()
{
	float x, y, e, z;
	cout<<"Ingrese el valor al cual desea sacarle el cuadrado: "<<endl;
	cin>>x;
	cout<<"El cuadrado del valor ingresado es: "<< cuad(x) <<endl;
	cin>>e>>z;
	cout<<produ(e,z)<<endl;
}


