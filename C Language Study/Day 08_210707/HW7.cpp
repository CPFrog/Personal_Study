#include <stdio.h>

int main(){
	double distance, velocity, elasped;
	printf("* 거리를 입력하시오(km단위) : ");
	scanf("%lf", &distance);
	printf("* 시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &velocity);
	
	printf("%.2lf km = >",distance);
	elasped=distance/velocity;
	int hours = elasped;
	elasped=(elasped-hours)*60;
	int minutes=elasped;
	elasped-=minutes;
	
	printf("%d시간 %d분 %.3lf 초 소요됨\n", hours, minutes, elasped*60);
	
	return 0;
}
