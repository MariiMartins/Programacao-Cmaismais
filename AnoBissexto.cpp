#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int ano=0, resto_4=0, resto_100=0, resto_400=0;
  
  cout << "PROGRAMA PARA VERIFICAR SE UM ANO E BISSEXTO" << endl;
  cout << "Digite o valor do ano e tecle enter: ";
  cin >> ano;
  
  resto_4 = ano % 4;
  resto_100 = ano % 100;
  resto_400 = ano % 400;
  
  if (rest_4 == 0)
  {
    if (resto_100 == 0)
    {
      if (resto_400 == 0)
      {
        count << "Ano " << ano << "e bissexto. ";
      }
      else
      {
      count << "Ano " << ano << "nao e bissexto. ";
      }
    }
    else
    {
      count << "Ano " << ano << "e bissexto. "; 
    }
  }
  else
  {
    count << "Ano " << ano << "nao e bissexto. ";
  }
  return 0;
}  
