#include<stdio.h>
int main(){
    int n,i=0,j;
    int bin[32];
    printf("Enter decimal value:\n");
    scanf("%d",&n);
    if(n==0)
        printf("Binary value = 0");
    else {
        while(n!=0){
            bin[i]=n%2;
            n/=2;
            i++;
        }
        j=i-1;
        printf("Binary value = \n");
        while(j>=0){
            printf("%d ",bin[j]);
            j--;
        }
    }
    return 0;
}