#include <stdio.h>

int input();
void output(int height, int days);
int calc(int height);
void buf_flush();

int main(){
	for(int i=0;i<2;i++){
		int height = input();
		int days=calc(height);
		output(height, days);
	}
}

int input(){
	int height;
	INPUT:
	printf("우물의 깊이를 입력하시오(cm단위) : ");
	int res=scanf("%d", &height);
	if (res!=1 || height<0){
		printf("!! ERROR !! 우물의 깊이는 0~21억 범위만 입력 가능합니다. 다시 시도하세요.\n");
		buf_flush();
		goto INPUT; // 입력 오류시 횟수 차감하지 않고 다시 입력받기 위해 goto문 활용.
	}
	return height;
}

void output(int height, int days){
	printf("%.2lf 미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", (double)height/100, days);
	return;
}

int calc(int height){
	long long h=height;
	int days=0;
	if(h>0){
		while(++days){
			h-=50;
			if(h<=0)
				break;
			h+=20;
		}
	}
	return days;
}

void buf_flush(){
	while(getchar()!='\n'){}
	return;
}
