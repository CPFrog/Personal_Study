#include <stdio.h>

int main(){
	char c;
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &c);
	printf("%d은 '%c'의 ASCII code 입니다.\n", c, c);
	
	return 0;
}
