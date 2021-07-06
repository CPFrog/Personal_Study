#include <stdio.h>

int main(){
    double time=365.2422;
    printf("%.4lf일은 ", time); //소수점 4째자리까지 출력하는 것으로 임의 정의.
    int days=time;
    time-=days;
    time*=(24*60*60);
    int hours=time/3600;
    time-=hours*3600;
    int minutes=time/60;
    time-=minutes*60;
    printf("%d일 %d시간 %d분 %.2lf초입니다.\n",days,hours,minutes,time);
    return 0;
}
