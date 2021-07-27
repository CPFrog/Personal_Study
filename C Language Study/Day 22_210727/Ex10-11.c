#include <stdio.h>
#include <stdlib.h>
int * myAlloc(int);
void dataInput(int*, int);
void dataOutput(int*, int);
void myDelete(int*);

int main(){
    int *ip;
    int col;
    printf("column 수 입력 : ");
    scanf("%d",&col);
    ip=myAlloc(col);
    dataInput(ip,col);
	dataOutput(ip,col);
    myDelete(ip);
    return 0;
}

int* myAlloc(int col){
    return (int*)malloc(sizeof(int)*col);
}

void dataInput(int* ip, int col){
    for(int i=0;i<col;i++){
        printf("정수 입력 (%d/%d) : ", i+1,col);
        scanf("%d",&ip[i]);
    }
}

void dataOutput(int* ip, int col){
    for(int i=0;i<col;i++){
        printf("%d ",ip[i]);
    }
	printf("\n");
}

void myDelete(int* ip){
    free(ip);
}
