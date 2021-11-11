#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
  float a=0, b=0, c=0, delata=0, raiz1=0, raiz2=0;
  
  cout << "PROGRAMA PARA CALCULO DAS RAIZES DE UMA EQUACAO DE SEGUNDO GRAU" << endl;
  cout << "EQUACAO DO TIPO ax2 + bx + c = 0" << endl << endl;
  cout << "Digite o valor de a tecle enter: ";
  cin >> a;
  cout << "digite o valor de b e tecle enter: ";
  cin >> b;
  cout << "digite o valor de c e tecle enter: ";
  cin >> c;
  
  delta = b*b - 4*a*c;

  if (delta < 0.0)
  {
    cout << endl << "Delta menor que zero. Nao existem raizes reais";
  }
  else
  {
    if (delta == 0.0)
    {
      raiz1 = -b / (2*a);
      cout << endl << "Delta igual a zero. Existe apenas uma raiz real ";
      cout << endl << "Raiz = " << raiz1;
    }
    else
    {
      raiz1 = (-b + sqrt(delta)) / (2*a);
      raiz2 = (-b - sqrt(delta)) / (2*a);
      cout << endl << "Delta maior que zero. Existem duas raizes reais ";
      cout << endl << "Raiz = " << raiz1;
      cout << endl << "Raiz = " << raiz2;
    }  

   } 
   return 0;
}  
