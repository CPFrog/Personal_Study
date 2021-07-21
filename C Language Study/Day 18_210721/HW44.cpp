#include <stdio.h>

int input();
int primeNumber(int);
void flush();

int main(){
    int num=input();
    int cnt=0;
    printf("1~%d까지의 소수 값은 다음과 같습니다.\n",num);
    for(int i=2;i<=num;i++){
        if(primeNumber(i)){
            printf("%d\t",i);
            cnt++;
            if(cnt%5==0)
                printf("\n");
        }
    }
    printf("\n1~%d까지의 총 소수는 %d개 입니다.\n",num,cnt);
    return 0;
}

int input(){
    int number;
    while(1){
        printf("* 정수값 하나를 입력하시오 : ");
        scanf("%d",&number);
        if(getchar()!='\n')
            flush();
        else if(number<1)
            printf("입력값은 1이상인 정수이어야 합니다.\n");
        else return number;
    }
}

int primeNumber(int number){
    if(number%2==0){
        if (number==2)
            return 1;
        else return 0;
    }
    for(int i=3;i*i<=number;i+=2){
        if(number%i==0)
            return 0;
    }
    return 1;
}

void flush(){
    while(getchar()!='\n');
}
