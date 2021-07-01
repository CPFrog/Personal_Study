#include <stdio.h>
//기본적인 변수 선언
int main(){
	//1. 변수 선언
	int age;
	float height;
	char blood[] = "AB";
	
	//2. 변수 초기화
	age=20;
	height=165.7;
	
	//3. 변수 실행(사용)
	printf("나이 : %d\n", age);
	printf("키 : %f\n", height);
	printf("혈액형 : %s\n", blood);
		
	return 0;
}
