#include<stdio.h>
#include<math.h>


int main()
{
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
		
	if((numero % 3 ==0)){
		printf("E multiplo de 3\n");
	}
	else{
		printf("Nao e multiplo de 3\n");
	}
}