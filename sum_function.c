#include<stdio.h>
int sum(int a, int b);
int main(){
    int a, b,sumab=0;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sumab=sum(a,b);
    printf("Sum = %d.\n",sumab);
    return 0;
}
int sum(int a, int b){
    return a+b;
}