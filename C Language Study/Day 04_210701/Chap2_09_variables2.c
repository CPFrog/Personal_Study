#include <stdio.h>
// 변수에 수식 사용
int main(){
	//1. 변수 선언
	int mit,nop;
	float nup;
	
	//2. 변수 초기화
	mit=11;
	nop=23;
	nup=mit*nop/2;
	
	//3. 변수 실행(사용)
	printf("밑변 : %d, 높이 : %d, 넓이 : %lf\n", mit, nop, nup);
		
	return 0;
}
