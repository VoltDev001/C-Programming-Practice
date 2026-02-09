#include<stdio.h>
int main(){
    int i, j;
    char ch[]="COMPUTER";
    i=7;
    while(i>=0){
        j=0;
        while(j<=i){  
            printf("%c ",ch[j]);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}