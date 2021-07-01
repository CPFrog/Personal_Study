#include <stdio.h>

int main(){
	int a=-1;
	float b=12.34f;
	
	//정수 int : %d(10진수), %u(양수인 10진수), %o(8진수), %x(16진수) -->가변 길이 4byte
	printf("---------------정수 int---------------\n");
	printf("부호 있는 10진수\t\t%%d\t: %d\n",a);
	printf("부호 없는 10진수\t\t%%u\t: %u\n",a);
	printf("부호 없는 8진수 \t\t%%#o\t: %#o\n",a); // #은 플래그 출력용.
	printf("부호 없는 소문자 16진수 \t%%#x\t: %#x\n",a); // #은 플래그 출력용.
	printf("부호 없는 대문자 16진수 \t%%#X\t: %#X\n",a); // #은 플래그 출력용.
	printf("\n");
	
	printf("---------------정수 short--------------\n");
	printf("부호 있는 10진수 \t\t%%hd\t: %hd\n",a);
	printf("부호 없는 10진수 \t\t%%hu\t: %hu\n",a);
	printf("부호 없는 8진수 \t\t%%#ho: %#ho\n",a); // #은 플래그 출력용.
	printf("부호 없는 소문자 16진수\t%%#hx: %#hx\n",a); // #은 플래그 출력용.
	printf("부호 없는 대문자 16진수\t%%#hX: %#hX\n",a); // #은 플래그 출력용.
	printf("\n");
	
	printf("---------------실수 float--------------\n");
	printf("일반적인 실수\t\t\t%%f\t: %f\n",b);
	printf("지수형 실수 (소문자) \t%%e\t: %e\n",b);
	printf("지수형 실수 (대문자) \t%%E \t: %E\n",b);
	printf("%%f와 %%e중 짧은거 출력 \t%%g\t: %g\n",b);
	printf("%%F와 %%E중 짧은거 출력 \t%%G\t: %G\n",b);
	printf("\n");
	
	printf("---------------실수 double-------------\n");
	printf("일반적인 실수\t\t\t%%lf\t: %lf\n",b);
	printf("지수형 실수 (소문자) \t%%le\t: %le\n",b);
	printf("%%lf와 %%le중 짧은거 출력\t%%lg\t: %lg\n",b);
	printf("\n");
	
	printf("------------문자 char, 문자열------------\n");
	printf("문자 출력 \t\t%%c\t: %c\n",'A');
	printf("문자열 출력 \t%%s\t: %s\n","Hello World!");
	printf("- 주의 : %% 문자를 출력하려면 printf문 안에 %%를 두 번 넣어야 한다.");
	printf("\n");
	
	return 0;
}
