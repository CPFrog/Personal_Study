#include <stdio.h>

int main(){
	int cnt=0;
	//네이버 인턴 면접 기출문제.
	//아래 for문에서 반복횟수?
	for(char i=1;i<100;i--){
		printf("i = %d, cnt = %d\n", i, cnt++);
	}
	//for, while의 반복횟수 = 실행문의 실행횟수 (X), 반복문의 반복횟수 (O)
	return 0;
}
