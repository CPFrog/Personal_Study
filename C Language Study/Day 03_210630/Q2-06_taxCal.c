#include <stdio.h>
#define TAX 0.1

int main(){
    int price=1000;
    printf("품번 : %d\n", 1);
    printf("제품명 : %s\n", "사과");
    printf("단가 : %d\n", price);
    printf("세금 : %lf\n\n", price*TAX);
    
#undef TAX
#define TAX 0.2
    
    printf("품번 : %d\n", 1);
    printf("제품명 : %s\n", "사과");
    printf("단가 : %d\n", price);
    printf("세금 : %lf\n", price*TAX);
    
    return 0;
}
