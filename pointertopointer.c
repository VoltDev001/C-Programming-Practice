#include<stdio.h>
int main(){
    int a=45;
    int* ptr=&a;
    int** pptr=&ptr;
    printf("Value of a = %d\n",a);
    printf("Value of a using pointer = %d\n",*ptr);
    printf("Value of a using pointer to pointer = %d\n",**pptr);
    printf("Address of a = %p\n",&a);
    printf("Address of a using pointer = %p\n",ptr);
    printf("Address of a using pointer to pointer = %p\n",*pptr);
    printf("Address of ptr = %p\n",&ptr);
    printf("Address of ptr = %p\n",pptr);
    printf("Address of pptr = %p\n",&pptr);
    return 0;
}