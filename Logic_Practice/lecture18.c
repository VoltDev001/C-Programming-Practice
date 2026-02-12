#include<stdio.h>
int isPrime(int x);
void printPrime(int a, int b);
int nextPrime(int c);
int main(){
    // printPrime(1,100);
    printf("%d",nextPrime(103));
    return 0;
}
int isPrime(int x){
    for(int i=2; i<x; i++)
        if(x%i==0)
            return 0;
    return 1;
}
void printPrime(int a, int b){
    for(int i=a; i<=b; i++){
        if(isPrime(i))
            printf("%d ",i);
    }
}
int nextPrime(int c){
    int i;
    for(i=c+1; ;i++){
        if(isPrime(i)){
            return i;
        }
    }
}