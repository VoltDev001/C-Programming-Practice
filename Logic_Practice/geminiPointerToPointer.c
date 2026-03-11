#include<stdio.h>
void swapRoutes(int **dptr1, int **dptr2);
int main(){
    int a=45, b=26;
    int *ptr1=&a, *ptr2=&b;
    printf("a = %d \nb = %d\n", *ptr1, *ptr2);
    swapRoutes(&ptr1, &ptr2);
    printf("a = %d \nb = %d\n", *ptr1, *ptr2);
    return 0;
}
void swapRoutes(int **dptr1, int **dptr2){
    if (dptr1 == NULL || dptr2 == NULL) return;
    if (*dptr1 == NULL || *dptr2 == NULL) return;
    int *temp=(*dptr1);
    *dptr1=*dptr2;
    *dptr2=temp;
}