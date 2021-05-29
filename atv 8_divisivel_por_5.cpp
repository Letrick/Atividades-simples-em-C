#include<stdio.h>
#include<math.h>

int main()
{
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	if((numero % 5 ==0)){
		printf("O numero e divisivel por 5\n");
	}
	else{
		printf("O numero nao e divisivel por 5\n");
	}
	return 0;
}