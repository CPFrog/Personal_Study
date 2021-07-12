#include <stdio.h>
#include <string.h>

int main(){
    printf("#성을 입력하시오 : ");
    char family[20];
	scanf("%s", family);
    
	printf("#이름을 입력하시오 : ");
    char name[20];
	scanf("%s", name);
	
	printf("%s %s\n",family,name);
    printf("%*d %*d\n", strlen(family), strlen(family), strlen(name), strlen(name));
	
	return 0;
}
