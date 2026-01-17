#include<stdio.h>
int main(){
    int x=45;
    int *ptr=&x;
    printf("Value of x = %d\n",x);
    printf("Value of x using pointer = %u\n",*ptr);
    printf("Value of x using pointer = %d\n",*ptr);
    printf("Address of x = %p\n",&x);
    printf("Address of x using pointer = %p\n",ptr);
    printf("Address of pointer = %p\n",&ptr);
    printf("Address of x in integer = %u\n",&x);
    printf("Address of x using pointer in integer = %u\n",ptr);
    printf("Address of pointer in integer = %u\n",&ptr);
    return 0;
}