#include <stdio.h>

int main(){
	printf("<2중 for문을 이용한 출력>\n");
	
	for(int i=1;i<10;i++){
		for(int j=2;j<6;j++){
			printf("%d*%d=%2d\t",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=1;i<10;i++){
		for(int j=6;j<10;j++){
			printf("%d*%d=%2d\t",j,i,i*j);
		}
		printf("\n");
	}
	
	for(int i=0;i<40;i++)
		printf("-");
	
	printf("\n\n<3중 for문을 이용한 출력>\n");
	for(int i=0;i<2;i++){
		for(int j=1;j<10;j++){
			for(int k=i*4+2;k<(i+1)*4+2;k++){
				printf("%d*%d=%2d\t",k,j,k*j);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
