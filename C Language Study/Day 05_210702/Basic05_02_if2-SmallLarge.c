#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	
	if(num1>num2)
		printf("%d이 %d보다 큽니다.\n", num1, num2);
	else
		printf("%d이 %d보다 큽니다.\n", num2, num1);
	return 0;
}
