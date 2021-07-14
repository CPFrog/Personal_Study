#include <stdio.h>

int input();
void flush();

int main(){
	unsigned short cnt=0;
	while(cnt<10){
		int weight=input();
		if(weight>=150&&weight<=500){
			cnt++;
			printf("* 현재 달걀의 수 : %hu\n", cnt);
		}
		else if(weight<150)
			printf("* 메추리알 가지고 장난하지 마시오~ ^^\n");
		else printf("* 타조알 가지고 장난하지 마시오~ ^^\n");
	}
	printf("\n*** 달걀 포장이 끝났습니다.\n");
	return 0;
}

int input(){
	int weight;
	while(1){
		printf("# 계란의 무게를 입력하세요(단위 : g) : ");
		int res=scanf("%d", &weight);
		if(res<1 || weight<0){
			printf("  달걀의 무게는 양의 정수이여야 합니다. 다시 시도하세요.\n");
			flush();
		}
		else return weight;
	}
}

void flush(){
	while(getchar()!='\n'){}
	return;
}
