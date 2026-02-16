#include<stdio.h>
int f[100];
void Nnatural(int n);
void Nnaturalrev(int n);
void Nsquare(int n);
void Neven(int n);
void Nodd(int n);
int Nsum(int n);
int Nsumeven(int n);
int Nsumodd(int n);
int factorial(int n);
int fact(int n);
int Nsquaresum(int n);
void deciToBin(int n);
int main(){
    int x;
    for(int i=0; i<100; i++)
        f[i]=-1;
    printf("Enter a number:\n");
    scanf("%d",&x);
    Nnatural(x);
    printf("\n");
    Nnaturalrev(x);
    printf("\n");
    Nsquare(x);
    printf("\n");
    Neven(x);
    printf("\n");
    Nodd(x);
    printf("\n%d\n",Nsum(x));
    printf("%d\n",Nsumeven(x));
    printf("%d\n",Nsumodd(x));
    printf("%d\n",factorial(x));
    printf("%d\n",fact(x));
    printf("%d\n",Nsquaresum(x));
    deciToBin(x);
    return 0;
}
void Nnatural(int n){
    if(n>0){
        Nnatural(n-1);
        printf("%d ",n);
    }
}
void Nnaturalrev(int n){
    if(n>0){
        printf("%d ",n);
        Nnaturalrev(n-1);
    }
}
void Nsquare(int n){
    if(n>0){
        Nsquare(n-1);
        printf("%d ",n*n);
    }
}
void Neven(int n){
    if(n>0){
        Neven(n-1);
        printf("%d ",2*n);
    }
}
void Nodd(int n){
    if(n>0){
        Nodd(n-1);
        printf("%d ",2*n-1);
    }
}
int Nsum(int n){
    if(n==1)
        return 1;
    return Nsum(n-1)+n;
}
int Nsumeven(int n){
    if(n==1)
        return 2;
    return Nsumeven(n-1)+2*n;
}
int Nsumodd(int n){
    if(n==1)
        return 1;
    return Nsumodd(n-1)+(2*n-1);
}
int factorial(int n){
    if(n==0)
        return 1;
    return factorial(n-1)*n;
}
int fact(int n){
    if(f[n-1]!=-1)
        return f[n-1];
    else if(n==0)
        return 1;
    else
        f[n-1]=factorial(n-1)*n;
    return f[n-1];
}
int Nsquaresum(int n){
    if(n==1)
        return 1*1;
    return n*n+Nsquaresum(n-1);
}
void deciToBin(int n){
    if(n!=0){
        deciToBin(n/2);
        printf("%d ",n%2);
    }
}