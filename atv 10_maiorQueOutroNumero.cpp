#include<stdio.h>

int main(){
	int a, b, resto;
	
	printf("Informe um valor para A:");
	scanf("%d", &a);
	
		printf("Informe um valor para B:");
		scanf("%d", &b);
		
			if(a >= b){
			printf("A e maior que B\n");
		}else{
		printf("A nao e maior que B\n");
		}
		if(a <= b){
			printf("B e maior que A\n");
		}else{
		printf("B nao e maior que A\n");
		}
		return 0;
}