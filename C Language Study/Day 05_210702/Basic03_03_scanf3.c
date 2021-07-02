#include <stdio.h>

int main(){
	// 문자와 문자열 입력받기
	char classroom, name[20];
	
	printf("반(A,B,C) 입력 : ");
	scanf("%c", &classroom);
	
	print("성명 입력 : ");
	scanf("%s", name);
	
	printf("당신은 %c반, %s입니다.\n", classroom, name);
	return 0;
}
