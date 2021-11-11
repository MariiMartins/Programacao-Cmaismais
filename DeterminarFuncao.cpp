#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
  float x=0, raiz=0, fx=0;
  
  cout << "PROGRAMA PARA DETERMINACAO DO VALOR FA FUNCAO f(x)" << endl;
  cout << "Digite o valor de x e tecle enter: ";
  cin >> x;
  
  raiz = x*x -16;
  
  if (raiz < 0)
  {
    count << endl << "Raiz menor que zero. Nao tem valor real para f(x).";
  }
  else
  {  
    if (raiz == 0)
    {
      count << endl << "Raiz igual a zero. Funcao indeterminada";
    }
    else
    {
      fx = (5*x +3) / sqrt(raiz);
      cout << endl << "f(x) = " << raiz;
    }
  }  
  return 0;
}  
