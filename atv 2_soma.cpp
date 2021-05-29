#include <iostream>
using namespace std;


/**
2) Construa um programa em C++ que leia dois valores numéricos inteiros e 
efetue a adição; caso o resultado seja maior que 10, apresentá-lo.
 */
 
 
using namespace std;

int main () {
	int numero1 = 0;
	int numero2 = 0;
	
cout << "digite o primeiro numero inteiro: \n";
cin >> numero1;

cout << "digite o segundo numero inteiro: \n";
cin >> numero2;

	int soma = numero1 + numero2;
	if (soma > 10) {
		cout << "Soma: " << soma;
	}
	
		
	return 0;
	
}
