#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int A,B;
	cout<<"Ingrese el tamaño del vector:\n";
	cin>>A; B=sqrt(A);
	int C[A],D[A];
	for(int i=1;i<=A;i++)
	{
		C[i]=i; cout<<C[i]<<" ";
	}cout<<"\n\n";
	for(int i=2;i<=B;i++)
	{
		if(A%i == 0)
			D[i-1]=0;
		else
			D[i-1]=1;
	}
	for(int i=2;i<=B;i++)
	{
		cout<<D[i-1]<<" ";
	}
}

