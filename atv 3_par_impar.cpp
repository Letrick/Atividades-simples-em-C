#include <iostream>


/**
3) Construa um programa em C++ que determine (imprima) se um dado número N inteiro (recebido através 
do teclado) é PAR ou ÍMPAR.  
 */
 
 
using namespace std;

int main() {
  int numero;
  cout << "Digite um numero: ";
  cin >> numero;

  if (numero % 2 == 0)
      cout << "Par" << endl;
  else
      cout << "Impar" << endl;

  return 0;
}	
	

