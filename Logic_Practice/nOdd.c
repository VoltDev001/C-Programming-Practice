#include<stdio.h>
int main(){
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    int i=1,sum=0;
    while(i<=2*n){
        sum+=i;
        i=i+2;
    }
    printf("%d",sum);
    return 0;
}