#include <stdio.h>

double input1();
double input2();
void output();

int main(){
	double distance, velocity, elasped;
	distance=input1();
	
	
	printf("%.2lf km = >",distance);
	elasped=distance/velocity;
	int hours = elasped;
	elasped=(elasped-hours)*60;
	int minutes=elasped;
	elasped-=minutes;
	
	printf("%d시간 %d분 %.3lf 초 소요됨\n", hours, minutes, elasped*60);
	
	return 0;
}

double input1(){
	double dist;
	printf("* 거리를 입력하시오(km단위) : ");
	scanf("%lf", &dist);
	return dist;
}
double input2(){
	double velo;
	printf("* 시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &velocity);
}
