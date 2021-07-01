#include <stdio.h>
//문자열 변수 선언해보기..?
int main(){
	//	1. 변수 선언 + 2. 초기화
	//	char pnum="AB01", pname="apple"; <- 문자 변수에 문자열을 넣으려고 하므로 에러 발생
	int price=12000, count=100;
	float height=30.7, weight=20.6;
	
	// 3. 변수 실행문
//	printf("제품번호 : %c\n", pnum);
//	printf("제품명 : %c\n", pname);
	printf("가격 : %d\n", price);
	printf("주문 수량 : %d\n",count);
	printf("높이 : %lf\n", height);
	printf("너비 : %lf\n", weight);
	
	return 0;
}
