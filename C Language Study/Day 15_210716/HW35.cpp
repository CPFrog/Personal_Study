#include <stdio.h>
typedef unsigned long long ll;

void flush();

int main(){
	ll sum=0;
	for(int i=1;i<=5;){
		int input;
		printf("0 보다 큰수를 입력하시오 (%d 번째) : ", i);
		scanf("%d",&input);
		if(getchar()!='\n')
			flush();
		else if(input<1)
			continue;
		else {
			sum+=input;
			i++;
		}
	}
	printf("입력된 값의 총 합 : %llu\n", sum);
	return 0;
	
}

void flush(){
	while(getchar()!='\n'){}
	return;
}
