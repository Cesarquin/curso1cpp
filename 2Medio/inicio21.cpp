#include<iostream>
using namespace std;
main()
{
	char A;
	// se muestran las opciones de menú:
	cout<<"Digite una de las siguientes opc:\n\ta. aparece 100.\n\tb. aparece 200.\n\tc. aparece 300.\n\n";
	cin>>A;
	// evalúa la selección del usuario:
	switch(A)
	{
		case 'a':
			cout<<"\n\t\t100\n\n";
			break;
		case 'b':
			cout<<"\n\t\t200\n\n";
			break;
		case 'c':
			cout<<"\n\t\t300\n\n";
			break;
		default:
			cout<<"\n\tLA OPCION NO SE ENCUENTRA EN EL MENU.\n\n";
	}
	cout<<"\t\t\t\tFinish!!!";
}



