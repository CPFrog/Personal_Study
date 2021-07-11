#include <stdio.h>

int main(){
	double sum=0;
	for(int i=1;i<=5;i++){
		printf("- %d 번 학생의 키는? ",i);
		double temp;
		scanf("%lf", &temp);
		sum+=temp;
	}
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", sum/5);
	return 0;
}
