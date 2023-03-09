#include<iostream>
using namespace std;
main()
{
	int A;
	// se muestran las opciones de menú:
	cout<<"Digite una de las siguientes opc:\n\t1. aparece 100.\n\t2. aparece 200.\n\t3. aparece 300.\n\n";
	cin>>A;
	// evalúa la selección del usuario:
	switch(A)
	{
		case 1:
			cout<<"\n\t\t100\n\n";
			break;
		case 2:
			cout<<"\n\t\t200\n\n";
			break;
		case 3:
			cout<<"\n\t\t300\n\n";
			break;
		default:
			cout<<"\n\tLA OPCION NO SE ENCUENTRA EN EL MENU.\n\n";
	}
	cout<<"\t\t\t\tFinish!!!";
}



