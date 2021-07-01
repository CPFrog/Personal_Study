#include <stdio.h>

int main(){
	char name[]="홍길동";
	char studentID[]="19123";
	int score_c=95;
	int score_algo=82;
	int total=score_c+score_algo;
	double avg=total/2;
	
	printf("성명 : %s\n", name);
	printf("학번 : %s\n", studentID);
	printf("C언어 : %d\n",score_c);
	printf("알고리즘 : %d\n", score_algo);
	printf("합계 : %d\n", total);
	printf("평균 : %lf\n", avg);
	
	return 0;
}
