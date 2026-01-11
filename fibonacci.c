#include<stdio.h>
int fibo(int n);
void main(){
    int n;
    printf("Enter number  : ");
    scanf("%d",&n);
    printf("The fibonacci of %d terms is = %d\n",n,fibo(n));
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibonm1 = fibo(n-1);
    int fibonm2 = fibo(n-2);
    int fibon = fibonm1 + fibonm2;
    return fibon;
}