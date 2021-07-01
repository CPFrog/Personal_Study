#include <stdio.h>

int main(){
    char a=-100; //char 범위: -2^7~(2^7)-1
    unsigned char b=200; //unsigned char 범위: 0~(2^7)-1
    
    printf("a=%d\n",a);
    printf("b=%u\n",b);
    return 0;
}
