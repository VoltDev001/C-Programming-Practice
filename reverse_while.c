#include <stdio.h>
int main(){
    int n,ndigit=1,i=1;
    printf("Enter a number : \n");
    scanf("%d",&n);
    while(n >= 10){
        ndigit+=1;
        n=n/10;
    }
    while(i <= ndigit){
        printf("%d",n%10);
        n=n/10;
        i++;
    }
    return 0;
}