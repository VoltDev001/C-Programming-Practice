#include<stdio.h>
int main(){
    int x,rem=0,rev=0;
    scanf("%d",&x);
    // while(x%10==0 && x!=0){
    //     printf("0");
    //     x=x/10;
    // }
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    printf("%d",rev);
    return 0;
}