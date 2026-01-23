#include<stdio.h>
int main(){
    int n,i=2;
    printf("Enter a number upto which you want prime numbers:\n");
    scanf("%d",&n);
    while(i<=n){
        int j=2;
        int isPrime=1;
        while(j<i){
            if(i%j==0){
                isPrime=0;
                break;
            }
            j++;
        }
            if(isPrime==1){
                printf("%d is prime.\n",i);
            }
        i++;
    }
    return 0;
}