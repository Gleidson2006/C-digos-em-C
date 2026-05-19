#include<stdio.h>


int main(){
	printf("\n --- Calculadora de soma ---");
	int A;
	int B;
	int resultado;
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&A);
	printf("Digite o segundo numero:");
	scanf("%d",&B);
	resultado = A + B;
	printf("Resultado: %d\n", resultado);


	return 0;
}
