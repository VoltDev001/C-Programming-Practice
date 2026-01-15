#include<stdio.h>
int main(){
    int n,fact=1;
    void factorial(int n);
    printf("Enter a number whose factorial is to be known : ");
    scanf("%d", &n);
    printf("Factorial of %d= \n",n);
    factorial(n);
    printf("1=");
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("%d.\n",fact);
    return 0;
}
    void factorial(int n){
        for(int i=n; i>=2; i--){
        printf("%d*",i);
        }
    }