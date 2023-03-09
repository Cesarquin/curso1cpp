#include<iostream>
using namespace std;
main()
{
	int A[5]={1,1}; 
	int B[5]={1,1}, n=3, C[n]={};
		
	for(int i=0;i<=n;i++)
	{
		for(int m=0;m<=i;m++)
		{
			C[i]+=A[m]*B[i-m];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<< C[i] << ";\t";
	}	
}


