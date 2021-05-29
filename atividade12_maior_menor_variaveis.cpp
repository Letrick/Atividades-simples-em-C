#include<iostream>

/**
 Atividade 12 -> ABCD -> 
*/
using namespace std;

int main() {
	
	int numA = 0;
	int numB = 0;
	int numC = 0;
	int numD = 0;
	
	int maior = 0;
	int menor = 0;
	
		
	cout << "Escreva 1 primeiro valor: \n";
	cin  >> numA;
	cout << "Escreva 2 primeiro valor: \n";
	cin  >> numB;
	cout << "Escreva 3 primeiro valor: \n";
	cin  >> numC;
	cout << "Escreva 4 primeiro valor: \n";
	cin  >> numD;
	
	// aqui validamos o maior numero e guardamos na variavel maior
	if (numA >= numB && numA >= numC && numA >= numD) {
		maior = numA;
	} else if (numB >= numA && numB >= numC && numB >= numD) {
		maior = numB;
	} else if (numC >= numA && numC >= numB && numC >= numD) {
		maior = numC;
	} else {
		maior = numD;
	}
	
	// aqui validamos o menor numero e guardamos na variavel menor
	if (numA <= numB && numA <= numC && numA <= numD) {
		menor = numA;
	} else if (numB <= numA && numB <= numC && numB <= numD) {
		menor = numB;
	} else if (numC <= numA && numC <= numB && numC <= numD) {
		menor = numC;
	} else {
		menor = numD;
	}
	
	cout << "Maior: " << maior << "\n"; 
	cout << "Menor: " << menor << "\n"; 
	return 0;
}