#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init(int[5][5]);
int rrand(int);
void calc(int[5][5], int[3]);
void output(int[5][5],int[3]);

int main(){
    int arr[5][5];
    srand((unsigned int)time(NULL));
    init(arr);
    int res[3]={0};
    calc(arr, res);
    output(arr, res);
    return 0;
}

void init(int arr[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=rrand(20);
        }
    }
}

int rrand(int max){
    int res=rand()%max;
    return (res==0?20:res);
}

void calc(int arr[5][5], int res[3]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j) res[0]+=arr[i][j];
            else if(i<j) res[1]+=arr[i][j];
            else res[2]+=arr[i][j];
        }
    }
}

void output(int arr[5][5], int res[3]){
    for(int i=0;i<5;i++){
        printf("%d번 행 : ",i);
        for(int j=0;j<5;j++){
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++)
        printf("sum%d = %d\n",i+1,res[i]);
}
