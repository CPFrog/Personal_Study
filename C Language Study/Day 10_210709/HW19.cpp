#include <stdio.h>

int input();
int yearCheck(int year);
void output(int year, int check);

int main(){
	int year=input();
	int check=yearCheck(year);
	output(year, check);
	return 0;
}

int input(){
	printf("년도를 입력하시오 : ");
	int year;
	scanf("%d",&year);
	return year;
}

int yearCheck(int year){
	if(year%4!=0)
		return 0;
	if(year%100!=0)
		return 1;
	if(year%400==0)
		return 1;
	else return 0;
}

void output(int year, int check){
	printf("%d년은 윤년(Leap year)",year);
	if(check)
		printf("입니다.\n");
	else printf("이 아닙니다.\n");
	return;
}
