#include <stdio.h>

int main(){
	int num1, num2, res;
	
	printf("두 개의 정수를 공백으로 구분하여 입력하세요. : ");
	scanf("%d %d", &num1, &num2);
	
	if(num2 !=0){
		res=num1/num2;
		printf("%d를 %d로 나눈 몫 : %d", num1, num2, res);
	}
	else
		printf("DIV/0! Error : 0으로 나눌 수 없습니다.\n");
	return 0;
}
