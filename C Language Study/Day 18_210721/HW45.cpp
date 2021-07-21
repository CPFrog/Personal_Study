#include <stdio.h>

void inputRange(int*, int*);
char inputEvenOdd(int, int);
void output(int, int, char);
void flush();

int main(){
    int start, end;
    inputRange(&start, &end);
    char select=inputEvenOdd(start, end);
    output(start, end, select);
    return 0;
}

void inputRange(int *start, int *end){
    while(1){
        printf("# 시작 값을 입력하시오 : ");
        scanf("%d", start);
        if(getchar()!='\n')
            flush();
        else if(*start<0)
            continue;
        else break;
    }
    while(1){
        printf("# 끝 값을 입력하시오 : ");
        scanf("%d", end);
        if(getchar()!='\n')
            flush();
        else if(*end<=*start)
            continue;
        else break;
    }
}

char inputEvenOdd(int start, int end){
    while(1){
        printf("* %d~%d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", start, end);
        char c;
        scanf("%c",&c);
        if(c!='e'&&c!='o'){
            flush();
            continue;
        }
        else return c;
    }
}

void output(int start, int end, char select){
    printf("  %d~%d까지의 %s(",start, end, (select=='o'?"홀수":"짝수"));
    unsigned int sum=0;
    for(int i=start;i<=end;i++){
        if(i%2&&select=='o'){
            if(sum!=0)
                printf(" ");
            printf("%d",i);
            sum+=i;
        }
        else if(i%2==0&&select=='e'){
            if(sum!=0)
                printf(" ");
            printf("%d", i);
            sum+=i;
        }
    }
    printf(")의 합은 %d 입니다.\n",sum);
    return;
}

void flush(){
    while(getchar()!='\n');
}
