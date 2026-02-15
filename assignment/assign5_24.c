#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    char st[100]="COMPUTER";
    n=strlen(st);
    i=n;
    while(i>=1){
        j=1;
        while(j<i){
            printf("  ");
            j++;
        }
        j=n;
        while(j>=i){
            printf("%c ",st[j-1]);
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}