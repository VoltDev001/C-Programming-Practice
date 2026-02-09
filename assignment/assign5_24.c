#include<stdio.h>
#include<string.h>
int main(){
    int i, j, n, row_len,start_index;
    char ch[]="MOUSE";
    n=strlen(ch);
    for(i=0; i<=2*n-1; i++){
        if(i<n)
            row_len=i+1;
        else
            row_len=2*n-1-i;
        for(j=0; j<row_len; j++)
            printf("%c ",ch[n-j-1]);
        for(j=1; j<2*(n-row_len); j++)
            printf("  ");//DOUBLE SPACE
        start_index=0;
        if(row_len==n)
            start_index=1;
        for(j=start_index; j<row_len; j++){
            printf("%c ",ch[(n-row_len)+j]);
        }
        printf("\n");
    }
    return 0;
}