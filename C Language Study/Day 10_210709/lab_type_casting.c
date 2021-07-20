#include <stdio.h>


int main(){
    char a=100, b=3;
    int res=a*b; //char 범위 벗어나는 곱셈 연산... 결과는?
    printf("a * b = %d\n", res);
    return 0;
}
