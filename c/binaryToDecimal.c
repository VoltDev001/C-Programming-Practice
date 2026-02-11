#include<stdio.h>
int main(){
    int n,rem,deci=0,base=1;
    printf("Enter binary value:\n");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        deci+=base*rem;
        base*=2;
        n/=10;
    }
    printf("Decimal value = %d\n",deci);
    return 0;
}