#include<stdio.h>
int f[100];
int sumDigits(int n);
float xPowery(int x, int y);
int fibonacci(int n);
int fibo(int n);
int main(){
    int x,y;
    for(int i=0; i<100; i++)
        f[i]=-1;
    printf("Enter number x and y:\n");
    scanf("%d%d",&x,&y);
    printf("%d \n",sumDigits(x));
    printf("%f\n",xPowery(x,y));
    printf("%d \n",fibonacci(x));
    printf("%d \n",fibo(x));
    return 0;
}
int sumDigits(int n){
    if(n==0)
        return 0;
    return n%10 + sumDigits(n/10);
}
float xPowery(int x, int y){
    if(y==0)
        return 1;
    if(y>0)
        return x*xPowery(x,y-1);
    else
        return (1.0/x)*(xPowery(x,y+1));
}
int fibonacci(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int fibo(int n){        //more efficient
    if(f[n-1]!=-1)
        return f[n-1];
    else if(n==1)
        f[0]=0;
    else if(n==2)
        f[1]=1;
    else
        f[n-1]=fibo(n-1)+fibo(n-2);
    return f[n-1];
}