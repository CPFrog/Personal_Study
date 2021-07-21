#include <stdio.h>
#include <string.h>

void input(int*, int*, int*);
int check(int, int, int);
unsigned int days(int, int, int);
void output(int, int, int, unsigned int);
void flush();

int main(){
	int year, month, day;
	input(&year, &month, &day);
	unsigned int sum=days(year, month, day);
	output(year, month, day, sum);
}

void input(int *year, int *month, int *day){
	while(1){
		printf("* 년 월 일을 입력하시오 : ");
		int res=scanf("%d %d %d", year, month, day);
		if(res!=3||getchar()!='\n'){
			flush();
			continue;
		}
		else if(check(*year,*month,*day))
			continue;
		else return;
	}
}

int check(int year, int month, int day){
	if(year<1900)
		return 1;
	else if(month<1||month>12)
		return 1;
	else if(day>31||day<1)
		return 1;
	switch (month) {
		case 2:
			if(day>29)
				return 1;
			else if(day==29&&(year%4!=0))
				return 1;
			else return 0;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day==31)
				return 1;
			else return 0;
		default:
			return 0;
	}
}

unsigned int days(int year, int month, int day){
	unsigned int ans=day-1;
	int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<month-1;i++){
		if(i==1&&year%4==0)
			ans+=29;
		else ans+=arr[i];
	}
	for(int i=1900;i<year;i++){
		if(i%4==0)
			ans+=366;
		else ans+=365;
	}
	return ans;
}

void output(int year, int month, int day, unsigned int sum){
	char c[2];
	switch(sum%7){
		case 0:
			strcpy(c,"일");
			break;
		case 1:
			strcpy(c,"월");
			break;
		case 2:
			strcpy(c,"화");
			break;
		case 3:
			strcpy(c,"수");
			break;
		case 4:
			strcpy(c,"목");
			break;
		case 5:
			strcpy(c,"금");
			break;
		default:
			strcpy(c,"토");
	}
	printf("  %d년 %d월 %d일은 %s요일입니다.\n", year, month, day, c);
}

void flush(){
	while(getchar()!='\n');
}
