#include <stdio.h>

int main(){
    int a=3.14;
    printf("a: %lf\t%d",a,a);
    // 정수형 자료를 실수형 자료 출력형으로 출력하면 의도하지 않은 값으로 출력된다.
    
    double b=3.14;
    printf("b: %lf\t%d",b,b);
    // 실수형 자료를 정수형 자료 출력형으로 출력해도 마찬가지로 의도하지 않은 값으로 출력된다.
    return 0;
}
