#include <stdio.h>

int main(){
	while(1){
		char ch;
		printf("* 영문자 대문자 입력('A'~'Z') : ");
		scanf("%c",&ch);
		if(ch<'A'||ch>'Z')
			return 0;
		else{
			for(char i=ch;i>='A';i--){
				for(char j=ch;j>=i;j--)
					printf("%c",j);
				printf("\n");
			}
			printf("\n");
			while(getchar()!='\n');
		}
	}
}

