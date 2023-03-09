#include<iostream>
using namespace std;
main()
{
	int A,B;
	cout<<"Ingrese dos valores escalares:\n";
	cin>>A>>B;
	int C[A],D[A];
	for(int i=0;i<A;i++)
	{
		C[i]=2*i+1; 
		cout<<C[i]<<" ";
		D[i]=B*C[i];
	}cout<<"\n"<<endl;	
	for(int i=0;i<A;i++)
		cout<<D[i]*B<<" ";


}

