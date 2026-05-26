#include<stdio.h>
int main(){
	int matriz [3][3];
	int soma=0;

	/*
	(0,0) (0,1) (0,2)
	(1,0) (1,1) (1,2)
	(2,0) (2,1) (2,3)
	*/
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite um valor para (%d,%d)",i,j);
			scanf("%d",&matriz [i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d, ",matriz [i][j]);
			soma= matriz [i][j] + soma;
			
		}
		printf("\n");
	}
	printf("soma = %d",soma);
	return 0;
}
