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


	if (numero > 20) {
		cout << numero + 8;
	 
	} else {
		cout << numero - 5;
	}
}
		
	

