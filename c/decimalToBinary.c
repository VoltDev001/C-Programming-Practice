#include<stdio.h>
int main(){
    int n,rem=0,unit=1,bin=0;
    printf("Enter decimal value:\n");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        bin=bin+rem*unit;
        unit*=10;
        n/=2;
    }
    printf("Binary value = %d\n",bin);
    return 0;
}