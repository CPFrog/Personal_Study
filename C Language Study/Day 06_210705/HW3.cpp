#include <stdio.h>

int main(){
	int seconds;
	printf("초 수를 입력하시오 : ");
	scanf("%d",&seconds);
	
	printf("%d초는 ", seconds);
	int hours=seconds/3600;
	seconds%=3600;
	int minutes=seconds/60;
	seconds%=60;
	if(hours!=0)
		printf("%d시간 ",hours);
	if(minutes!=0)
		printf("%d분 ", minutes);
	printf("%d초 입니다.\n", seconds);
	return 0;
}
