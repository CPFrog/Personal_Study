#include <stdio.h>
#include <string.h>

int main(){
	char name[21];
	printf("이름을 입력하시오 : ");
	gets(name);
    printf("\"%s\"\n\"%20s\"\n\"%-20s\"\n",name, name, name);
    return 0;
}
