#include <stdio.h>

int input();

int main(){
	int num=input();
	for(int i=1;i<=num;i++){
		printf("*");
		if(i%5==0&&i!=num)
			printf("\n");
	}
	printf("\n");
	return 0;
}

int input(){
	printf("# 정수값을 입력하세요 : ");
	int num;
	scanf("%d",&num);
	return num;
}
