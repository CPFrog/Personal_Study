#include <stdio.h>
//문자열 변수
int main(){
	//	1. 변수 선언 + 2. 초기화
	char pnum[5]="AB01", pname[]="apple";
	int price=12000, count=100;
	float height=30.7, weight=20.6;
	
	// 3. 변수 실행문
	printf("제품번호 : %s\n", pnum);
	printf("제품명 : %s\n", pname);
	printf("가격 : %d\n", price);
	printf("주문 수량 : %d\n",count);
	printf("높이 : %lf\n", height);
	printf("너비 : %lf\n", weight);
	
	return 0;
}
