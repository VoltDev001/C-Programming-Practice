#include<stdio.h>
int main(){
    for(int i=1; i<=4; i++){
        for(int k=4; k>i; k--){ // or (int k=1; k<=(4-i;); k++)
            printf(" ");
        }
        for(int j=1; j<=i; j++){  // or (int j=1; j<=i; j++)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}