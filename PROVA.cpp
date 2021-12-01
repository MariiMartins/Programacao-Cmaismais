#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  float valor=0, imposto=0;
  
  cout << "PROGRAMA PARA VERIFICAR O VALOR DA TAXAÇÃO DE IMPOSTOS EM DETERMINADO PRODUTO" << endl;

  cout << "Digite o valor do produto atual tecle enter: ";
  cin >> valor;
  
  if (valor <= 100.0)
  {
    imposto = valor;
    cout << "Insento de Imposto! Valor da Compra = R$ " << imposto << endl;
  }
  else
  {
      if (valor <= 500.0)
      {
        imposto = valor * 1.05;
        cout << "Há 5% de Imposto! Valor da Compra = R$ " << imposto << endl;
      }
      else
      {
        imposto = valor * 1.10;
        cout << "Há 10% de Imposto! Valor da Compra = R$ " << imposto << endl;
      }
  }  
 
  return 0;
}  
