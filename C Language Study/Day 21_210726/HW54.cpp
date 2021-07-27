#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init(int[3][4]);
int rrand(int);
void output(int[3][4]);

int main(){
    int arr[3][4];
    srand((unsigned int)time(NULL));
    init(arr);
    output(arr);
    return 0;
}

void init(int arr[3][4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=rrand(10);
        }
    }
    return;
}

int rrand(int max){
    return rand()%max;
}

void output(int arr[3][4]){
    int col[4]={0};
    for(int i=0;i<3;i++){
        int row=0;
        printf("%d행    : ",i);
        for(int j=0;j<4;j++){
            printf("%2d ", arr[i][j]);
            row+=arr[i][j];
            col[j]+=arr[i][j];
        }
        printf("\t%d 행의 합 : %2d\n",i,row);
    }
    printf("열의 합 : ");
    for(int i=0;i<4;i++)
        printf("%2d ", col[i]);
    printf("\n");
    return;
}
