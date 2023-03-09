#include<iostream>
using namespace std;
main()
{
	int m, i=1, j=1;
	cout<<"Ingrese numero: "<<endl;
	cin>>m;
	while(i<=m)
	{	j=1;
		while(j<=i)
		{
			cout<<j<<"\t"; j++;
		}
		cout<<endl;
		i++;
	}
/* El resultado de una posible ejecución cuando m=5 es:

1	
1	2
1	2	3
1	2	3	4
1	2	3	4	5

*/	
	
}



