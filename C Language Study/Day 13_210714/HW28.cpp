#include <stdio.h>

int main(){
	printf("# 영문 문장을 입력 하시오 : \n");
	char ch;
	unsigned int en=0, num=0, sp=0, etc=0;
	while((ch=getchar())!=EOF){
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
			en++;
		else if(ch>='0'&&ch<='9')
			num++;
		else if(ch==' '||ch=='\t'||ch=='\n')
			sp++;
		else etc++;
	}
	printf("\n");
	printf("* 영문자 대소문자 개수 : %u개\n", en);
	printf("* 숫자문자 개수 : %u개\n", num);
	printf("* 여백문자(spae, tab, enter) 개수 : %u개\n", sp);
	printf("* 그 외 기타문자 개수 : %u개\n", etc);
	return 0;
}
