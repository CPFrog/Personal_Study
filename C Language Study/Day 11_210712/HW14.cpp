#include <stdio.h>
#include <string.h>

int main(){
	for(int i=0;i<4;i++){
		char input[100];
		printf("* 문자열 입력 : ");
		scanf("%s",input);
		char out[100];
		memset(out, 0, sizeof(out));
		strncpy(out, input, strlen(input)/2);
		printf("[%*s...]\n",strlen(input),out);
	}
	return 0;
}
