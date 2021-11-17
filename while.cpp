#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int numero = 0, contador = 0, soma = 0;

	while (numero != -1) {
		cout << "Digite um número inteiro positivo. Para encerrar digite -1"
			 << endl;
		cin >> numero;
		if (numero != -1) {
			soma = soma + numero;contador = contador +1;
		}
	}
	cout << "Foram digitados " << contador << " numeros" << endl;
	cout << "A soma dos numeros digitados igual a " << soma << endl;
	return 0;
}
