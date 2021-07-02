#include <stdio.h>

int main(){
	for(i=1;i<=50;i++){
		if((i%5)!=0)
			printf("%d ", i);
		else{
			printf("%d\n", i);
			printf("------------\n");
		}
	}
	return 0;
}
