#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  float valor=0, imposto=0, total=0;
  
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
        imposto = valor * 0.05;
        total = valor * 1.05;
        cout << "Há 5% de Imposto! Valor do Imposto = R$ " << imposto << endl;
        cout << "Valor da Compra = R$ " << total << endl;
      }
      else
      {
        imposto = valor * 0.10;
        total = valor * 1.10;
        cout << "Há 10% de Imposto! Valor da Compra = R$ " << imposto << endl;
        cout << "Valor da Compra = R$ " << total << endl;
      }
  }  
 
  return 0;
}  
