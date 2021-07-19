#include <stdio.h>

int input();
void output(int cash);
void flush();

int main(){
	while(1){
		int cash=input();
		if(cash==-1)
			return 0;
		else output(cash);
	}
}

int input(){
	while(1){
		printf("현재 당신의 소유 금액 입력 : ");
		int cash=-1;
		scanf("%d",&cash);
		if(getchar()!='\n'){
			if(cash==-1)
				return -1;
			else{
				printf("!! 실수를 입력하셨으므로 현재 소지 금액은 정수부분의 값만 인정하여 계산합니다.\n");
				flush();
				return cash;
			}
		}
		else if(cash<0)
			printf("!! 소유 금액은 음수가 될 수 없습니다.\n");
		else return cash;
	}
}

void output(int cash){
	const int cream=500, shrimp=700, coke=400;
	int cnt=0;
	for(int i=1;(cash-cream*i)>=1100;i++){
		for(int j=1;(cash-cream*i-shrimp*j)>=400;j++){
			if((cash-cream*i-shrimp*j)%coke==0){
				int k=(cash-cream*i-shrimp*j)/coke;
				printf("크림빵(%d 개), 새우깡 (%d 봉지), 콜라(%d 병)\n", i, j, k);
				cnt++;
			}
		}
	}
	if(cnt>0)
		printf("어떻게 구입하시겠습니까?\n\n");
	else
		printf("구입할 수 있는 경우의 수가 없습니다.\n\n");
}

void flush(){
	while(getchar()!='\n');
}
