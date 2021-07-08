#include <stdio.h>
#include <string.h>

int main(){
	char name[20];
	printf("이름을 입력하시오 : ");
	fgets(name, 20, stdin);
	int len=strlen(name);
	printf("%s", name);
	for(int i=0;i<20-len;i++)
		printf(" ");
	printf("%s", name);
	for(int i=0;i<)
}
