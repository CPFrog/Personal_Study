#include <stdio.h>

void sort(int *, int);
void swap(int *, int *);

int main(){
    int arr[]={8,2,4,11,1,6};
    int size=sizeof(arr)/sizeof(int);
    printf("# 소트 전 데이터 : ");
    for(int i=0;i<size;i++)
        printf("%d ", arr[i]);
    printf("\n");
    sort(arr, size);
    printf("# 소트 후 데이터 : ");
    for(int i=0;i<size;i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}

void sort(int *arr, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i])
                swap(&arr[i], &arr[j]);
        }
    }
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
