#include <stdio.h>

int main(){
	int n;
	
	printf("2~9사이의 정수 입력 : ");
	scanf("%d", &n);
	
	int i=1;
	while(i<=9){
		printf("%d * %d = %2d\n", n, i, n*i); // %2d = 출력하는 자리수 맞춰주는 출력 형태.
		i++;
		/* 위 두 줄을 한 줄로 줄이고 싶다면?
		 printf("%d * %d = %2d\n", n, i, n*(i++)); */
	}
	return 0;
}
