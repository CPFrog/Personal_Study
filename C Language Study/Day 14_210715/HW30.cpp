#include <stdio.h>
#include <limits.h>

int input();
void flush();

int main(){
	for(int cnt=0;cnt<2;cnt++){
		int num=input();
		printf("%d(10) = ",num);
		unsigned int mask=INT_MIN;
		for(int i=31;i>=0;i--){
			unsigned int res=mask&num;
			printf("%u",res>>(unsigned int)i);
			mask>>=1;
		}
		printf("(2)\n");
		if(cnt==0)
			printf("\n");
	}
	return 0;
}

int input(){
	int num;
	while(1){
		printf("* 10진수 정수를 입력하시오 : ");
		int res=scanf("%d", &num);
		if (res!=1){
			printf("!! 입력 값이 정수가 아닙니다. 다시 입력하세요.\n");
			flush();
		}
		else return num;
	}
}

void flush(){
	while(getchar()!='\n'){};
}
