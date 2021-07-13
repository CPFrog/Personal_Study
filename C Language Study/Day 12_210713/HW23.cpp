#include <stdio.h>
#define max(a,b) (a>b?(a):(b))
#define min(a,b) (a<b?(a):(b))

int main(){
	int a,b;
	while(1){
		printf("# 두개의 정수를 입력하세요 : ");
		int cnt=scanf("%d %d",&a,&b);
		if(cnt<2) return 0;
		int res=max(a,b)-min(a,b);
		printf("%d - %d = %d\n", max(a,b), min(a,b), res);
	}
}
