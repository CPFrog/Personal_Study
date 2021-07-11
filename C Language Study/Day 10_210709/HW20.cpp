#include <stdio.h>
typedef unsigned long long ll;

int input();
ll income_calc(int hours);
ll tax_calc(ll income);
void output(ll income, ll tax);

int main(){
	int hours=input();
	ll income=income_calc(hours);
	ll tax=tax_calc(income);
	output(income, tax);
	return 0;
}

int input(){
	printf("* 1주일간의 근무시간을 입력하시오 : ");
	int hours;
	scanf("%d", &hours);
	return hours;
}

ll income_calc(int hours){
	int base=3000;
	int normal=(hours>40?40:hours);
	int extra=(hours>40?hours-40:0);
	return base*normal+base*extra*3/2;
}

ll tax_calc(ll income){
	ll normal=(income>100000?100000:income);
	ll extra=income>100000?income-100000:0;
	return normal*3/20+extra/4;
}

void output(ll income, ll tax){
	printf("# 총수입 : %lld원\n", income);
	printf("# 세  금 : %lld원\n", tax);
	printf("# 실수입 : %lld원\n", income-tax);
	return;
}
