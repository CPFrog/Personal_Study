#include <stdio.h>

int electric_usage();
void print_out(double bill);

int main(){
    printf("전기 사용량을 입력하세요(kw) : ");
    int used=electric_usage();
    double base=660, price=88.5;
    double total=base+price*used;
    total*=1.09;
    print_out(total);
    return 0;
}

int electric_usage(){
    int kws;
    scanf("%d", &kws);
    return kws;
}

void print_out(double bill){
    printf("전기 사용 요금은 %lf 원 입니다.\n", bill);
    return;
}
