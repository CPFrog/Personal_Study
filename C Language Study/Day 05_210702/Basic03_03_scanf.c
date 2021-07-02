#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("정수1 : ");
	scanf("%d", &num1);
	printf("정수2 : ");
	scanf("%d", &num2);
	
	printf("정수1 %d + 정수2 %d = %d\n", num1, num2, num1+num2);
	
	return 0;
}
