#include<stdio.h>
int printArray(int fibo[], int n);
int main(){
    int n;
    printf("Enter number of terms :\n");
    scanf("%d",&n);
    int fibo[n];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2; i<n; i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    printArray(fibo, n);
    return 0;
}
int printArray(int fibo[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t",fibo[i]);
    }
}