#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
  float temp=0, press=0;
  
  cout << "PROGRAMA PARA VERIFICAR SE TEMPERATURA E PRESSAO MAXIMA FORAM ATINGIDAS" << endl;

  cout << "Digite o valor da temperatura em oC tecle enter: ";
  cin >> temp;
  cout << "digite o valor da pressao em Bar e tecle enter: ";
  cin >> press;
  count << endl;

  if (temp >= 150.0)
  {
    cout << "Temperatura = " << temp << " oC - Temperatura acima da temperatura normal de trabalho." << endl;
  }
  else
  {
    cout << "Temperatura = " << temp << " oC - Temperatura normal de trabalho." << endl;
  }
   if (press >= 100.0)
  {
    cout << "Pressao = " << temp << " Bar - Pressao acima da pressao normal de trabalho." << endl;
  }
  else
  {
    cout << "Pressao = " << temp << "Bar - Pressao normal de trabalho." << endl;
  }  
  
  system("PAUSE");
  return 0;
}  
