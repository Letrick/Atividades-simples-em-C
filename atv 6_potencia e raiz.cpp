#include <iostream>
#include<cmath>
using namespace std;


/**
6) Escreva um programa em C++  que leia um número e imprima a raiz quadrada 
do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. 
efetue a adição; caso o resultado seja maior que 10, apresentá-lo.
 **COM LIB
 */
 
 
using namespace std;

int main () {
	double numero = 0;
	
	cout << "digite o numero inteiro: \n";
	cin >> numero;


	if (numero < 0) {
		double pot = pow(numero, 2.0);
		cout << "Pow: " << pot;
	}else {
		int raiz = sqrt (numero);
		cout << "Raiz: " << raiz;
	}
		
	}
	
		
	

