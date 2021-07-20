#include <stdio.h>
#include <float.h>

int main(){
	int cnt=0;
	//네이버 인턴 면접 기출문제.
	//아래 for문에서 반복횟수?
	for(char i=1;i<100;i--){
		printf("i = %d, cnt = %d\n", i, ++cnt);
	}
	//for, while의 반복횟수 = 실행문의 실행횟수 (X), 반복문의 반복횟수 (O)
	/*
	 for(char i=1<i<200;i++) 에서의 반복횟수? --> 무한대
	 --> signed char형 자료가 128을 넘어갈 일이 없기 떄문에 무조건 200보다 작음. --> 계속 반복.
	 */
	float a=FLT_MIN;
	printf("%lf\n", a/100000000.0f);
	return 0;
}
