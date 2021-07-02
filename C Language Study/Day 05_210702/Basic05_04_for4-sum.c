#include <stdio.h>

int main(){
	int i, sum=0;
	
	for(i=1;i<=100;i++)
		sum+=i;
	
	printf("1~100의 합 : %d\n", sum);
	return 0;
}
