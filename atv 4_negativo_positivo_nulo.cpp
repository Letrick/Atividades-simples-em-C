#include <iostream>


/**
4) Escreva um programa em C++ para 
determinar se um dado número N (recebido através do teclado) 
é POSITIVO, NEGATIVO ou NULO. 
 */
 
 
using namespace std;

int main () {
	int numero = 0;
	
	cout << "digite o numero inteiro: \n";
	cin >> numero;


	if (numero < 0) {
		cout << "Negativo";
	} else if (numero > 0) {
		cout << "Positivo";
	} else {
		cout << "Nulo";
	}
}
		
	

