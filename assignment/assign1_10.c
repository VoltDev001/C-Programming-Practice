#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);
    printf("Value of a = %d and value of b = %d.\n",a,b);
    b=a+b;
    a=b-a;
    b-=a;
    printf("The swapped value of a = %d.\n",a);
    printf("The swapped value of b = %d.\n",b);
    return 0;
}