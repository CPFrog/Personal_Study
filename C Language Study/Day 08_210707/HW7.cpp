#include <stdio.h>

double input1();
double input2();
void output(double dist, int hour, int min, double elasp);

int main(){
	for(int i=0;i<3;i++){
		double distance=input1();
		double velocity=input2();
		double elasped=distance/velocity;
		
		int hours = elasped;
		elasped=(elasped-hours)*60;
		
		int minutes=elasped;
		elasped-=minutes;
		output(distance, hours, minutes, elasped);
	}
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
	scanf("%lf", &velo);
	return velo;
}

void output(double dist, int hour, int min, double elasp){
	printf("%.2lf km = >%d시간 %d분 %.3lf 초 소요됨\n\n",dist, hour, min, elasp*60);
	return;
}
