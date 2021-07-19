#include <stdio.h>
#define SQUARE(x) x*x
#define PRT(x) printf("%d\n",x)

int main(){
    int x=4;
    
    PRT(SQUARE(x+2));
    PRT(100/SQUARE(2));
    PRT(SQUARE(++x));
    return 0;
}
