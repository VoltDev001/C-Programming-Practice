#include<stdio.h>
int main(){
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    int i=1;
    while(i<=2*n){
        printf("%d ",i);
        i+2;
    }
    return 0;
}