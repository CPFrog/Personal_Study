#include <stdio.h>

int main(){
	for(int i=1;i<=100;i++){
		if(i%3==0){
			if(i%5==0){
				printf("%4d",i);
				if(i%2==0){
					printf("\n");
				}
			}
			else printf("   *");
		}
		else if(i%5==0){
			printf("   #");
			if(i%2==0)
				printf("\n");
		}
		else printf("%4d",i);
	}
	return 0;
}
