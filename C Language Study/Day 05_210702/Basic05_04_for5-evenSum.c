#include <stdio.h>

int main(){
	int i, sum=0;
	
	// 방법 1
	for(i=2;i<=100;i+=2)
		sum+=i;
	/* 방법 2
	 for(int i=1;i<=100;i++)
		if((i%2)==0)
			sum += i;
	 */
	
	printf("1~100 중 짝수의 합 : %d\n", sum);
}
