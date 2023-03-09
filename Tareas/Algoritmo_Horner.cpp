#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int resto, numero, invertido = 0;

  do
  {
    cout << " introduzca valor del numero :";
    cin >> numero;
  }
  while (numero <= 0);
  for (; numero != 0; numero /= 10)
  {	
    resto = numero % 10;
    invertido = invertido * 10 + resto;
  }
  cout <<" numero invertido : " << invertido << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}

