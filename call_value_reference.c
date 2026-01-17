#include<stdio.h>
void printAddress(int n);
void _printAddress(int* n1);
int main(){
    int n=0;
    int *n1=&n;
    printAddress(n);
    printf("%u\n",&n);
    _printAddress(&n);
    printf("%u",&n);
    return 0;
}
void printAddress(int n){
    printf("%u\n",&n);
}
void _printAddress(int* n1){
    printf("%u\n",n1);
}