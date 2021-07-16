#include <stdio.h>
typedef unsigned long long ll;

int input(const char* str);
ll calc(int days);
void output(int days, ll get);
void flush();

int main(){
	int days=input("* 기사의 근무일수를 입력하시오 : ");
	output(days, calc(days));
	return 0;
}

int input(const char* str){
	printf("%s", str);
	int num;
	scanf("%d", &num);
	if(getchar()!='\n'){
		flush();
		num=input("!! 입력 오류. 다시 입력하시오 : ");
	}
	else if(num<1)
		num=input("!! 입력 오류. 입력 값은 1이상인 정수만 가능함 : ");
	return num;
}

ll calc(int days){
	int cnt=0;
	ll sum=0;
	for(int i=1;;i++){
		for(int j=0;j<i;j++){
			sum+=i;
			cnt++;
			if(cnt==days)
				return sum;
		}
	}
}

void output(int days, ll get){
	printf("  근무일 : %d 일 / 총 금화 수 : %llu 개\n", days, get);
	return;
}

void flush(){
	while(getchar()!='\n'){}
}
