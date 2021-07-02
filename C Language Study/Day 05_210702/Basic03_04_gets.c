#include <stdio.h>
#define MAXLEN 100

int main(){
	char item1[MAXLEN], item2[MAXLEN];
	gets(item1);
	gets(item2);
	
	// 추가 노트 : C11	에서 gets 함수는 비표준으로 분류됨.
	
	printf("item1 = %s\n", item1);
	printf("item2 = %s\n", item2);
	
	return 0;
}
