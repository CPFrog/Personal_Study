#include <stdio.h>

int main(){
	int i=1, sum=0;
	while(i<=100){
		sum+=i++;
	}
	printf("1~100까지 합계 : %d\n", sum);
	return 0;
}
