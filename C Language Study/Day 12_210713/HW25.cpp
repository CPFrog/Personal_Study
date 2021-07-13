#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int input();
void output(int min, int max);
int random(int seed);
void buf_flush();

int main(){
	srand((unsigned int)time(NULL));
	int ans=random(100);
	int cnt=0, min=0, max=100;
	while(++cnt){
		int guess=input();
		if(guess==ans){
			printf("우와~ 맞았당~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n", cnt);
			return 0;
		}
		else if(guess<ans){
			min=guess;
			output(min, max);
		}
		else{
			max=guess;
			output(min,max);
		}
	}
}

int input(){
	int guess;
	INPUT:
	printf("# 숫자를 입력하시오 : ");
	int cnt=scanf("%d",&guess);
	if(cnt!=1|| guess<0||guess>100){
		printf("입력값이 0 이상 100 이하의 정수가 되도록 다시 입력하세요.\n");
		buf_flush();
		goto INPUT; //잘못된 입력은 입력횟수로 치지 않기 위해 goto문 사용.
	}
	return guess;
}

void output(int min, int max){
	printf("%d 보다는 크고 %d 보다는 작습니다.\n", min, max);
	
}

int random(int seed){
	return rand()%seed+1;
}

void buf_flush(){
	while(getchar()!='\n'){}
	return;
}
