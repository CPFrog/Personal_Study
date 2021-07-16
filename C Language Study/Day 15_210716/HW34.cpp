#include <stdio.h>
typedef unsigned long long ll;

int input(const char* str);
ll calc(int kind, int usage);
void output(int kind, int usage, ll bill);
void flush();

int main(){
	int kind=input("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
	while(kind<1||kind>3)
		kind=input("!! 정확한 사용자 코드를 입력하시오 : ");
	int usage=input("* 사용량을 입력하시오 (ton단위) : ");
	while(usage<0)
		usage=input("!! 사용량은 음수 입력이 불가합니다. 다시 입력하세요 : ");
	
	output(kind, usage, calc(kind, usage));
	return 0;
}

int input(const char* str){
	printf("%s", str);
	int user_input;
	scanf("%d", &user_input);
	if(getchar()!='\n'){
		flush();
		user_input=input("!! 입력 오류. 다시 입력하시오 : ");
	}
	return user_input;
}

ll calc(int kind, int usage){
	ll bill=usage;
	switch(kind){
		case 1:
			bill*=50;
			break;
		case 2:
			bill*=45;
			break;
		default:
			bill*=30;
			break;
	}
	return bill*105/100;
}

void output(int kind, int usage, ll bill){
	printf("\n# 사용자코드 : ");
	switch(kind){
		case 1:
			printf("1(가정용)\n");
			break;
		case 2:
			printf("2(상업용)\n");
			break;
		default:
			printf("3(공업용)\n");
			break;
	}
	
	printf("# 사용량 : %d ton\n", usage);
	printf("# 총수도요금 : %llu원\n", bill);
	return;
}

void flush(){
	while(getchar()!='\n'){}
	return;
}
