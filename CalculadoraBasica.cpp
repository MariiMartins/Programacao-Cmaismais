#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
  float numero1=0, numero2=, resultado=0;
  char operacao;
  
  cout << "CALCULADORA CIENTIFICA BASICA" << endl << endl;
  cout <<"OPERACOES SUPORTADAS:" <<endl;
  cout <<"Simbolo    Operacao que sera realizada" << endl;
  cout << "   +          Adicao de dois numeros  " << endl;
  cout << "   -          Subtracao de dois numeros  " << endl;
  cout << "   *          Multiplicacao de dois numeros  " << endl;
  cout << "   /          Divisao de dois numeros  " << endl;
  cout << "   2          Elevar ao quadrado  " << endl;
  cout << "   3          Elevar ao cubo  " << endl;
  cout << "   r          Raiz quadrada de um numero  " << endl;
  cout << "   s          Seno de um ângulo  " << endl;
  cout << "   c          Cosseno de um angulo  " << endl;
  cout << "   t          Tangente de um ângulo  " << endl <<endl << endl;
    
  cout << "Digite o símbolo da operacao desejada conforme tabela acima: ";
  cin >> operacao;
  cout << endl;
  
  switch(operacao)
  {
    case '+': 
      cout << "Selecionada operacao adicao" << endl;
      cout << "Digite o primeiro numero: ";
      cin >> numero1;
      cout << "Digite o segundo numero: ";
      cin >> numero2;
      resultado = numero1 + numero2;
      cout << "O resultado de " << numero1 << "+" << numero2 << "=" << resultado << endl;
    break;
    
    case '-': 
      cout << "Selecionada operacao subtracao" << endl;
      cout << "Digite o primeiro numero: ";
      cin >> numero1;
      cout << "Digite o segundo numero: ";
      cin >> numero2;
      resultado = numero1 - numero2;
      cout << "O resultado de " << numero1 << "-" << numero2 << "=" << resultado << endl;
    break;  
    
    case '*': 
      cout << "Selecionada operacao multiplicacao" << endl;
      cout << "Digite o primeiro numero: ";
      cin >> numero1;
      cout << "Digite o segundo numero: ";
      cin >> numero2;
      resultado = numero1 * numero2;
      cout << "O resultado de " << numero1 << "*" << numero2 << "=" << resultado << endl;
    break;  
    
    case '/': 
      cout << "Selecionada operacao divisao" << endl;
      cout << "Digite o primeiro numero: ";
      cin >> numero1;
      cout << "Digite o segundo numero: ";
      cin >> numero2;
      resultado = numero1 / numero2;
      cout << "O resultado de " << numero1 << "/" << numero2 << "=" << resultado << endl;
    break;
    
    case '2': 
      cout << "Selecionada operacao de elevar o numero ao quadrado" << endl;
      cout << "Digite o numero: ";
      cin >> numero1;
      resultado = numero1 * numero1;
      cout << "O resultado de " << numero1 << "ao quadrado ="  << resultado << endl;
    break;    
  
    case '3': 
      cout << "Selecionada operacao de elevar o numero ao cubo" << endl;
      cout << "Digite o numero: ";
      cin >> numero1;
      resultado = pow(numero1, 3);
      cout << "O resultado de " << numero1 << "ao cubo ="  << resultado << endl;
    break;  
    
    case 'r': 
      cout << "Selecionada operacao de raiz quadrada" << endl;
      cout << "Digite o numero: ";
      cin >> numero1;
      resultado = sqrt(numero1, 3);
      cout << "O resultado da raiz quadrada de " << numero1 << "="  << resultado << endl;
    break;
    
    case 's': 
      cout << "Selecionada operacao de seno (rad)" << endl;
      cout << "Digite o angulo: ";
      cin >> numero1;
      resultado = sin(numero1);
      cout << "O resultado do seno do angulo de " << numero1 << "="  << resultado << endl;
    break;
    
    case 'c': 
      cout << "Selecionada operacao de cossenoo (rad)" << endl;
      cout << "Digite o angulo: ";
      cin >> numero1;
      resultado = cos (numero1);
      cout << "O resultado do cosseno do angulo de " << numero1 << "="  << resultado << endl;
    break;
    
    case 't': 
      cout << "Selecionada operacao de tangente (rad)" << endl;
      cout << "Digite o angulo: ";
      cin >> numero1;
      resultado = tan(numero1);
      cout << "O resultado da tangente do angulo de " << numero1 << "="  << resultado << endl;
    break; 
    
    default:
      cout << "A operacao digitada é invalida.." << endl;
  
  }
  
   return 0;
}
