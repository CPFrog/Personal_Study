#include <stdio.h>

double input_height();
double input_weight();
double calc(double height, double weight);
void print_out(double bmi);

int main(){
	double weight=input_weight();
	double height=input_height();
	double bmi=calc(height, weight);
	print_out(bmi);
	return 0;
}

double input_weight(){
	double weight;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf",&weight);
	return weight;
}
double input_height(){
	double height;
	printf("키를 입력하세요(m) : ");
	scanf("%lf",&height);
	return height;
}

double calc(double height, double weight){
	return weight / (height*height);
}

void print_out(double bmi){
	printf("당신의 BMI는 %.1lf으로 ",bmi);
	if(bmi<18.5)
		printf("저체중입니다\n");
	else if(bmi<25.0)
		printf("정상체중입니다\n");
	else if(bmi<30.0)
		printf("과체중입니다\n");
	else if(bmi<40.0)
		printf("비만입니다\n");
	else printf("고도비만입니다\n");
	return;
}
