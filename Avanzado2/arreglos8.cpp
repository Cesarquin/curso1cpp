#include<iostream>
using namespace std;

main()
{
	int ejemplo[2][3] = {1,2,3,4,5,6};
	int ejemplo2[2][3] = {{1,2,3},{4,5,6}};
	int i, j;
	for(i=0;i<2;i++)  // definir el incremento del contador de filas
	{
		for(j=0;j<3;j++)  // define el salto por columnas
		{
			cin >> ejemplo2[i][j];
		}
	}
	for(i=0;i<2;i++)  // definir el incremento del contador de filas
	{
		for(j=0;j<3;j++)  // define el salto por columnas
		{
			cout << ejemplo2[i][j] << "\t";
		}
		cout << endl;
	}

	
}

