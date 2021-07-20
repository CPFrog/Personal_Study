#include <stdio.h>

int main(){
	char str[]="apple";
	
	printf("%s\n",str);
	printf("%c\n",str[0]);
	printf("%c\n",str[3]);
	printf("%x\n",str); //str의 주소값을 16진수로 출력.
	printf("%c\n",str); //str이 있는 주소를 1byte가 나타낼 수 있는 숫자의 최대 값으로 mod연산 한 후의 문자.
	printf("%s\n",str[0]);
	return 0;
}
