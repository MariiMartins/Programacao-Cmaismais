#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  float a=0, b=0, c=0;
  
  cout << "PROGRAMA PARA VERIFICAR O MAIOR DE TRES NUMEROS FORNECIDOS" << endl;
  cout << "Digite o valor do primeiro numero tecle enter: ";
  cin >> a;
  cout << "digite o valor do segundo numero e tecle enter: ";
  cin >> b;
  cout << "digite o valor do terceiro numero tecle enter: ";
  cin >> c;
  
  if (a<b && a<c)
  {
    cout << "Menor numero = " << a << endl;
    if (b < c)
    {
      cout << "Intermediario = " << b << endl;
      cout << "Maior numero = " << c << endl;
    }  
    else
    {
      cout << "Intermediario = " << c << endl;
      cout << "Maior numero = " << b << endl; 
    }
  if (b<a && b<c)
  {
    cout << "Menor numero = " << b << endl;
    if (b < c)
    {
      cout << "Intermediario = " << a << endl;
      cout << "Maior numero = " << c << endl;
    }  
    else
    {
      cout << "Intermediario = " << c << endl;
      cout << "Maior numero = " << a << endl; 
   }
      if (c<a && c<b)
  {
    cout << "Menor numero = " << c << endl;
    if (b < c)
    {
      cout << "Intermediario = " << a << endl;
      cout << "Maior numero = " << b << endl;
    }  
    else
    {
      cout << "Intermediario = " << b << endl;
      cout << "Maior numero = " << a << endl; 
   }
   return 0;
}  
