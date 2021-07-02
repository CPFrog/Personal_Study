#include <stdio.h>

int main(){
	//공백이 있는 문자열 읽어오기(?)
	char item[100];
	
	printf("item 입력 : ");
	scanf("%s", item); //실행 결과 scanf로는 공백 읽을 수 없음.
	
	printf("item : %s\n", item);
	
	return 0;
}
