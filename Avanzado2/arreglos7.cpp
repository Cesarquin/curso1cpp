#include<iostream>
#include<math.h>
using namespace std;
float pe(float a[],float b[],int n)
{	// Inicio: i=0    acu  +=  a(i)*b(i)      final: i =n-1 (i<n)  
	float acu = 0;
	for(int i=0;i<n;i++)
	{
		acu  +=  a[i]*b[i];
	}	
	return acu;
}
float norma(float a[], int n)
{
	float aux;
	aux = pe(a, a, n);
	aux = sqrt(aux);
	return aux;
}
float coseno(float a[],float b[],int n)
{
	float aux;
	aux = pe(a, b, n) / ( norma(a, n) * norma(b, n) );
	return aux;
}
main()
{
	float A[3]={1,2,3}, B[3]={2,2,2};
	int n=3;
	
	printf("El resultado: %f \n\n",pe(A,B,n));
	cout << "La norma de A es: " << norma(A,n) << endl;
	cout << "La norma de B es: " << norma(B,n) << endl;
	cout << "El coseno del ángulo entre los dos vectores es:\n";
	cout << coseno(A,B,n) << endl;
}






