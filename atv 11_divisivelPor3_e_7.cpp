#include<stdio.h>
#include<math.h>

int main()
{
	int numero;
	
	printf("Informe qualquer numero: ");
	scanf("%d",&numero);
	
	if((numero % 3 ==0) && (numero % 7==0)){
		printf("O numero e divisivel por 3 e por 7\n");
	}
	else{
		printf("O numero nao e divisivel por 3 e por 7\n");
	}
	return 0;
}