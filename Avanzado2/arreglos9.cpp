#include<iostream>
#define max 3
using namespace std;
float matrix[max][max];
float leer(matrix[max][max], int n, int m)
{	
	//float matrix[max][max];
	for(int i=0;i<n;i++)  // definir el incremento del contador de filas
	{
		for(int j=0;j<m;j++)  // define el salto por columnas
		{
			cin >> matrix[i][j];
		}
	}
//	return matrix[max][max];
}
main()
{
	float ejemplo3[max][max];// = {1,2,3,4,5,6};
	float ejemplo2[2][3] = {{1,2,3},{4,5,6}};
	int i, j;
	matrix = leer(matrix[max][max],2,3);
	for(i=0;i<5;i++)  // definir el incremento del contador de filas
	{
		for(j=0;j<5;j++)  // define el salto por columnas
		{
			cout << ejemplo3[i][j] << "\t";
		}
		cout << endl;
	}

	
}

