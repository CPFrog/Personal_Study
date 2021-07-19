#include <stdio.h>

void input();

int main(){
	int i=0, cnt=0;
	while(i++<10){
		cnt++;
	}
	printf("%d %d\n", cnt, i);
	printf("\n");
	printf("lectopia\rABC\b#\n|");
	return 0;
}

void input(){
	while(getchar()!='\n') {}
}
