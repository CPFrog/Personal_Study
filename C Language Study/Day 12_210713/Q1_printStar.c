#include <stdio.h>

int main(){
	printf("출력할 별의 갯수를 입력하세요. : ");
	int num;
	scanf("%d", &num);
	for(int i=0;i<num/5;i++){
		for(int j=0;j<5;j++){
			printf("*");
			if(i*5+j==num)
				break;
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
