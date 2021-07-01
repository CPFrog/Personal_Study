#include <stdio.h>
#define PI 3.14 //전처리 단계에서 전처리기가 매크로상수를 대체문자열로 할당함.
int main(){
    printf("PI = %f\n", PI);
    printf("PI * 2 = %f\n", PI*2);
    printf("PI * 3 = %f\n", PI*3);
    
    return 0;
}
