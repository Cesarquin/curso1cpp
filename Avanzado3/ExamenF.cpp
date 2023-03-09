#include<iostream>
using namespace std;
main()
{
  float val1[10][10],	val2[10][10],val3[10][10],a,c,De;
  int b,i,k,n;
  //Ingreso del tamaño de la matriz
  cout<< "Ingrese el tamaño de matriz"<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
  	for(b=1;b<=n;b++)
  	   {
  		cout<< "ingrese el valor de la posicion."<<i<<","<<b<<":";
  		cin >>val1[i][b];
       val3[i][b]=val1[i][b];
	   }
  }
  //Traspuesta de la matriz
  for(i=1;i<=n;i++)
   {
  	 for(b=1;b<=n;b++)
  	 {
  	   	val2[i][b]=val1[i][b];
	 }
   } 
   //Impresión de los valores de traspuesta de la matriz  
   for(i=1;i<=n;i++)
   {
   	for(b=1;b<=n;b++)
   	 {
   	 	cout<< val2[i][b] <<"\t";
	 }
	 cout<<"\n";
   }
   //Cálculo de la determinante de la matriz triangular      superior
    for (i=1;i<=n;i++)
	{
        a= val3[i][i];
        for (b=i+1;b<=n;b++)
		{
            c= val3 [b][i]/a;
            for(k=1;k<=n;k++)
			{
                val3[b][k] = val3[b][k] - c* val3[i][k];
            }
        }
    }
    
    //visualizacion de los valores de la matriz determinante
    for(i=1;i<=n;i++)
    {
        for(b=1;b<=n;b++){
            cout<< val3[i][b]<<"\t";
        }
        cout<<endl;
    }
    //multiplicacion de la diagonal principal
    De=1;
    for (i=1;i<=n;i++){
        De*=val3[i][i];
    }
    cout<<"El determinante es:"<<De<<endl;

}
