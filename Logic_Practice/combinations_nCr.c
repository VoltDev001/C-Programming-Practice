#include<stdio.h>
int fact(int a);
int comb(int c, int d);
int main(){
    int n,r;
    printf("Enter value of n and r:\n");
    scanf("%d%d",&n,&r);
    printf("Number of combinations = %d.\n",comb(n,r));
    return 0;
}
int fact(int a){
    int f=1;
    while(a>0){
        f=f*a;
        a--;
    }
    return f;
}
int comb(int c, int d){
    int result=0;
    result=fact(c)/(fact(d)*fact(c-d));
    return result;
}