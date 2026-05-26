#include <stdio.h>
int main (){
	int matriz [2][2];
	/*
		(0,0) (0,1)
		(1,0) (1,1)
	*/
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("Digite um valor para (%d,%d): ",i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(int i=0;i<2;i++){
		printf("\n");
		for(int j=0;j<2;j++){
			printf("(%d)", matriz[i][j]);
		}
	}
	
	return 0;
}
