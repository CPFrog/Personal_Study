#include <stdio.h>

void temp();

int main(){
	printf("%d\n", sizeof(temp())); //함수의 return 형이 void 형이므로 sizeof 연산을 수행할 수 없음.
	return 0;
}

void temp(){
	return;
}
