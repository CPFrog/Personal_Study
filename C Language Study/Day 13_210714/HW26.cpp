#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int input();
int output(int user, int com);
int rand(int limits);
void flush();
char* rsp_convert(int n);


int main(){
	unsigned int win=0, draw=0;
	while(1){
		srand((unsigned int)time(NULL));
		int pc=rand(3);
		int user=input();
		int res=output(user, pc);
		if(res==1) win++;
		else if(res==2) draw++;
		else{
			printf("게임 결과 : %u 승 %u 무\n", win, draw);
			return 0;
		}
	}
}

int input(){
	int user;
	while(1){
		printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		int cnt=scanf("%d", &user);
	
		if(cnt<1||user<1||user>3){
			printf("  입력은 1 이상 3 이하의 정수만 가능합니다. 다시 시도하세요.\n");
			flush();
		}
		else return user;
	}
}

int output(int user, int com){
	int result;
	if(user==com)
		result=2;
	else if(user==1){
		if(com==2)
			result=1;
		else
			result=0;
	}
	else if(user==2){
		if(com==1)
			result=0;
		else result=1;
	}
	else{
		if(com==1)
			result=1;
		else result=0;
	}
	printf("  당신은 %s 선택, 컴퓨터는 %s 선택 : ", rsp_convert(user), rsp_convert(com));
	if(result==1)
		printf("이겼습니다.\n");
	else
		printf("%s\n", result==2?"비겼습니다.":"당신이 졌습니다.");
	return result;
}

int rand(int limits){
	return rand()%limits+1;
}

void flush(){
	while(getchar()!='\n'){}
	return;
}

char* rsp_convert(int n){
	switch(n){
		case 1:
			return "바위";
		case 2:
			return "가위";
		case 3:
			return "보";
		default:
			return "error";
	}
}
