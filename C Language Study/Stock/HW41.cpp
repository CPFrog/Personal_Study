#include <stdio.h>
void flush();

int main(){
	while(1){
		printf("# 출력 라인수를 입력하시오 : ");
		int input=-1;
		scanf("%d", &input);
		if(getchar()!='\n'){
			if(input==-1)
				return 0;
			else {
				printf("!! 입력값은 양수인 정수이어야 합니다.\n\n");
				flush();
			}
		}
		else if(input<0)
			printf("!! 입력값은 양수인 정수이어야 합니다.\n\n");
		else{
			for(int i=1;i<=input;i++){
				for(int j=1;j<=i;j++)
					printf("*");
				for(int j=0;j<(input-i)*2;j++)
					printf(" ");
				for(int j=1;j<=i;j++)
					printf("*");
				printf("\n");
			}
			printf("\n");
		}
	}
}

void flush(){
	while(getchar()!='\n');
}
