#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int numero1=0, numero2=0, resultado=0, soma=0;

  cout << "Digite o primeiro numero e tecle enter: ";
  cin >> numero1;
  cout << "digite o segundo numero e tecle enter: ";
  cin >> numero2;
  count << endl;

  soma = numero1 + numero2;

  if (soma <= 100)
  {
    resultado = soma + 50;
    cout << "Resultado da sima menor ou igual que 100" << endl;
    cout << "Sesse caso -> Resultado = " << soma << " + 50." << endl;
    cout << "Resultado = " << resultado << endl;
  }
  else
  {
    resultado = soma - 30;
    cout << "Resultado da soma maior que 100." << endl;
    cout << "Nesse caso -> Resultado = " << soma << " -30." << endl;
    cout << "Resultado = " << resultado << endl;
  }  
  
  return 0;
}  
