// plantilla o template.
#include<iostream>
using namespace std;
template <class T>
T mini(T A, T B)
{
	if(A<B)
		return A;
	else
		return B;
}
main()
{
	int x=4,y=8;
	cin>>x>>y;
	cout<<"el menor valor es: "<<mini(x,y)<<endl;
	float a,b;
	cin>>a>>b;
	cout<<"el menor valor es: "<<mini(a,b)<<endl;
	char p,q;
	cin>>p>>q;
	cout<<"el menor valor es: "<<mini(p,q)<<endl;
}



