#include <stdio.h>

int main(){
	int a=5, b=3;
	//C언어에서 True->0 이외의 모든 값, False=0 이다.
	
	if(5>3) //5가 3보다 크므로 조건문의 실행문이 실행됨.
		printf("A\n");
	printf("B\n"); //조건문 밖의 실행문이므로 조건문 결과 상관 없이 실행됨.
	
	if(5+3) //조건문 안의 값이 0이 아닌 수이므로 True로 인식함.
		printf("C\n");
	printf("D\n");
	
	if(5-5) //조건문 안의 값이 0이므로 실행문이 실행되지 않음.
		printf("E\n");
	
	if(a>b) //a(5)는 b(3)보다 크므로 조건 만족, 따라서 실행문이 실행됨.
		printf("F\n");
	
	if(a<3)
		printf("G\n"); //3은 a(5)보다 작으므로 조건문 만족 X, 실행문 건너뜀.
	printf("H\n");
	
	return 0;
}
