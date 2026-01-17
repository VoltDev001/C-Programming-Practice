#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[4];
    for(int i=1; i<=5; i++){
         printf("%d ",*ptr);
         ptr--;
    }

    return 0;
}