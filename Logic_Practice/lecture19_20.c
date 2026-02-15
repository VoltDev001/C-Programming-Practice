#include<stdio.h>
void Nnatural(int n);
void Nnaturalrev(int n);
void Nsquare(int n);
void Neven(int n);
void Nodd(int n);
int Nsum(int n);
int Nsumeven(int n);
int Nsumodd(int n);
int factorial(int n);
int Nsquaresum(int n);
int main(){
    int x;
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
    printf("%d\n",Nsquaresum(x));
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
int Nsquaresum(int n){
    if(n==1)
        return 1*1;
    return n*n+Nsquaresum(n-1);
}