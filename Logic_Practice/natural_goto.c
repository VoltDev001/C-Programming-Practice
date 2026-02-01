#include<stdio.h>
int main(){
    int i=1;
    natural:
    printf("%d",i);
    i++;
    if(i<=10)
    goto natural;
    return 0;
}