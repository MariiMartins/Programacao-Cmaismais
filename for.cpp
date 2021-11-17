#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int numero=0, n=0, fatorial=0;
  char repete = 's';

   

	while (repete == 's') 
  {
    cout << "Digite o número que deseja calcular o fatorial: ";
		cin >> numero;

    fatorial =1;
    for( n=numero ; n>0; n--)
    {
      fatorial = fatorial * n;
    }
		
    cout << "Fatorial de  " << numero << " - " << fatorial << endl;
    cout << "Digite s para executar um novo calculo de fatorial OU  n para sair" << endl;
    cin >> repete;

	}
	
	return 0;
}
