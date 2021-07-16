#include <stdio.h>
typedef unsigned long long ll;

int input(const char* str);
void flush();

int main(){
	ll sum=0;
	int num=input("피보나치 수열의 항수를 입력하시오 : ");
	
	ll a=0, b=1, temp;
	for(int i=1;i<=num;i++){
		printf("%llu", b);
		temp=b;
		sum+=b;
		b+=a;
		a=temp;
		if(i<num)
			printf(" + ");
		else printf(" = ");
	}
	printf("%llu\n", sum);
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

void flush(){
	while(getchar()!='\n'){}
}
