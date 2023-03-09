#include<iostream>
using namespace std;
void impri(int f,int c,char A)
{
	for(int i=0;i<f;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cout<< A;
		}
		cout<<endl;
	}
}
main()
{
	char B;
	cout<<"digite caracter: \n";
	cin>> B;
	impri(3,2,B);
	
}


