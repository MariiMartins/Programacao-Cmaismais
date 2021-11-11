#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  float salario=0, novo=0;
  
  cout << "PROGRAMA PARA VERIFICAR O VALOR DO SALARIO DE UM FUNCIONARIO E RESPECTIVO AUMENTO" << endl;

  cout << "Digite o valor do salario atual tecle enter: ";
  cin >> salario;
  
  if (salario < 500.0)
  {
    novo = salari9o * 1.15;
  }
  else
  {
      if (salario <= 1000.0)
      {
        novo = salario * 1.10;
      }
      else
      {
        novo = salario * 1.05;
      }
  }  
  
  cout << "Novo salario = R$ " << novo << endl;
  return 0;
}  
