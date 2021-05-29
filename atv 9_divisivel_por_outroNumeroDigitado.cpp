#include<stdio.h>

int main(){
	int A, B, resto;
	
	printf("Informe o primeiro: ");
	scanf("%d", &A);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &B);
		
		resto = A % B;
		
		if(resto == 0){
			printf("O primeiro numero e divisivel pelo segundo");
		}else{
		printf("O primeiro numero nao e divisivel pelo segundo");
		}
		return 0;
}