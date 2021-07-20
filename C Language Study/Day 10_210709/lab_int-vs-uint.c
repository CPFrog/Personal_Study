#include <stdio.h>

int main(){
	int x=-1;
	unsigned int y=1;
	printf("%d", x>y); //x가 unsigned int로 변환되어 MAX_UINT로 인식됨... True 출력.
	return 0;
}
