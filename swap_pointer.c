#include<stdio.h>
void swap(int a1, int b1);
void _swap(int *a1, int *b1);
int main(){
    int a=5, b=10;
    printf("a=%d & b=%d\n",a,b);//initial values of a and b
    swap(a, b);//swapped by call by value(1)
    // value of a=5 and b=10
     printf("a=%d & b=%d\n",a,b);
    _swap(&a, &b);//swapped by call by reference(2)
    // value of a=10 and b=5
    printf("a=%d & b=%d\n",a,b);
     swap(a, b);
     printf("a=%d & b=%d\n",a,b);
    return 0;
}
void swap(int a1, int b1){
    int temp=a1;
    a1=b1;
    b1=temp;
    printf("a=%d & b=%d\n",a1,b1);//1)values swapped but they are copies of a & b so a & b doesn't change for main function
}
void _swap(int *a1, int *b1){
    int temp=*a1;
    *a1=*b1;
    *b1=temp;
    printf("a=%d & b=%d\n",*a1,*b1);//2)values swapped with address as attriutes so values of a & b changes for main function too
}