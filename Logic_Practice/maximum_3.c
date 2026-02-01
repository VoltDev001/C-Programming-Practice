#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    // 4). using directly printf on ternery operator as it is replaced by the result
    printf("%d",a>=b ? a>=c?a:c : b>=c?b:c);
    // 3). using ternery operator
    // a>=b? a>=c?printf("%d",a):printf("%d",c) : b>=c?printf("%d",b):printf("%d",c);
    // 2).2 conditions are checked
    // if(a>=b){
    //     if(a>=c)
    //     printf("%d",a);
    //     else
    //     printf("%d",c);
    // }
    // else{
    //     if(b>=c)
    //     printf("%d",b);
    //     else
    //     printf("%d",c);
    // }
    // 1). 4 conditions are checked
    // if(a>=b && a>=c)
    // printf("%d",a);
    // else{
    //     if(b>=c)
    //     printf("%d",b);
    //     else
    //     printf("%d",c);
    // }
    return 0;
}