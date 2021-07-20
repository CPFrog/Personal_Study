#include <stdio.h>

int main(){
    printf("'%c', \0, end", '\0'); //문자 상수로 받을땐 null문자가 출력되지만 직접적으로 넣으면 출력되지 않음.
    return 0;
}
