#include <stdio.h>

int input_cnt();
void input_arr(int[10000]);
int difcnt(int[10000]);
void output(int);

int main(){
    while(1){
        int arr[10000]={0};
        if(input_cnt()==-1)
            return 0;
        input_arr(arr);
        output(difcnt(arr));
    }
}

int input_cnt(){
    int num;
    printf("* 입력할 숫자의 개수 : ");
    scanf("%d", &num);
    if(getchar()!='\n')
        return -1;
    else return num;
}

void input_arr(int arr[10000]){
    int num;
    printf("* 숫자 입력 : ");
    scanf("%d", &num);
    arr[num-1]=1;
    while(getchar()!='\n'){
        scanf("%d", &num);
        arr[num-1]=1;
    }
}

int difcnt(int arr[10000]){
    int cnt=0;
    for(int i=0;i<10000;i++){
        if(arr[i]==1)
            cnt++;
    }
    return cnt;
}

void output(int cnt){
    printf("  서로 다른 수의 개수 : %d\n\n",cnt);
}
