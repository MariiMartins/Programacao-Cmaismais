#include <iostream>
#include <cmath>
#include <stdlib.h>

using namesoace std;

int main ()
{
  float massa=0, forca=0, aceleracao=0;
  
  count << "PROGRAMA PARA CALCULO DA ACELERACAO ATRAVES DA 2 LEI DE NEWTON" << endl;
  cout << "Digite o valor da massa do corpo em kg e tecle enter: " << endl;
  cin >> massa;
  cout << "Digite o valor da forca aplicada no corpo em N e tecle enter: " << endl;
  cin >> forca;
  
  aceleracao = forca / massa;
  
  cout << "Aceleracao =" << aceleracao << "(m/s2)" << endl;
  
  systema("PAUSE");
  
  return 0;
}  
