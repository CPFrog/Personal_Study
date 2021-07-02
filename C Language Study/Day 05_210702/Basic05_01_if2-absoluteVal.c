#include <stdio.h>

int main(){
	int num;
	
	printf("하나의 정수를 입력하세요 : ");
	scanf("%d", &num);
	
	if(num<0) num= -num;
	
	printf("입력하신 정수의 절대값은 %d입니다.\n", num);
	
	return 0;
}
