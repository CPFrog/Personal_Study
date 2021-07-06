#include <stdio.h>

double fahrenheit_input();
void print_out(double celsius);

int main(){
    printf("화씨 온도를 입력하세요 : ");
    double farenheit=fahrenheit_input();
    double celsius=(double)5/9*(farenheit-32);
    print_out(celsius);
    return 0;
}

double fahrenheit_input(){
    double farenheit;
    scanf("%lf", &farenheit);
    return farenheit;
}

void print_out(double celsius){
    printf("섭씨 온도는 %.1lf 도입니다.\n", celsius);
    return;
}
