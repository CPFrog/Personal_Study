#include <stdio.h>
#include <string.h>

int main(){
    printf("#성을 입력하시오 : ");
    char family[20];
	scanf("%s", family);
    
	printf("#이름을 입력하시오 : ");
    char name[20];
	scanf("%s", name);
	
	int flen=strlen(family), nlen=strlen(name);
	printf("%s\t%s\n",family,name);
	for (int i=0;i<flen-(1+flen/10);i++)
		printf(" ");
	printf("%d\t", flen);
	for (int i=0;i<nlen-(1+nlen/10);i++)
		printf(" ");
	printf("%d\n", nlen);
	
	return 0;
}
