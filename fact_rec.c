#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of %d is = %d.\n",n,fact(n));
    return 0;
}
int fact(int n){
    if(n == 0){
        return 1;
    }
    int factnm1 = fact(n-1);
    int factn = factnm1*n;
    return factn;
}