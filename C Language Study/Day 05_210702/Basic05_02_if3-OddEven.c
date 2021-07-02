#include <stdio.h>

int main(){
	int a;
	
	printf("정수 입력 : ");
	scanf("%d", &a);
	
	if(a%2==1)
		printf("정수 %d는 홀수입니다.\n", a);
	else
		printf("정수 %d는 짝수입니다.\n", a);
	return 0;
}
