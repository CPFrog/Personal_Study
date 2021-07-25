#include <stdio.h>

void swap(int*, int);

int main(){
    int ary[]={1,2,3,4,5,6};
    int size=sizeof(ary)/sizeof(int);
    printf("처음 배열에 저장된 값 : ");
    for(int i=0;i<size;i++)
        printf("%d ", ary[i]);
    printf("\n");
    
    swap(ary,size);
    printf("바뀐 배열에 저장된 값 : ");
    for(int i=0;i<size;i++)
        printf("%d ", ary[i]);
    printf("\n");
    return 0;
}

void swap(int *ary, int size){
    int end;
    if(size%2==1)
        end=(size+1)/2;
    else
        end=size/2;
    
    for(int i=0;i<end;i++){
        int tmp=ary[i];
        ary[i]=ary[size-1-i];
        ary[size-1-i]=tmp;
    }
}
