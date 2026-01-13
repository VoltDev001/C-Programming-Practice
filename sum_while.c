#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number : \n");
    scanf("%d",&n);
     while(n > 0){
        sum+=n%10;
        n=n/10;
     }
     printf("Sum of given number = %d.\n",sum);
    return 0;
}