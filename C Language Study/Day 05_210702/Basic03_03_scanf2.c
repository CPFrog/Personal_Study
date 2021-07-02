#include <stdio.h>

int main(){
	// 2개의 숫자를 연속하여 입력받기
	int num1, num2;
	
	printf("2개의 정수를 공백으로 구분하여 입력하세요. : ");
	scanf("%d %d", &num1, &num2);
	
	printf("정수1 %d + 정수2 %d = %d\n", num1, num2, num1+num2);
	
	return 0;
}
