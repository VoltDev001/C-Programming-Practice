#include<stdio.h>
int main(){
    int i,j,n;
    char ch;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=2*n-1; j++){
            if(j>=n-i+2 && j<=n+i-2)
                printf("  ");
            else{
                ch='A'+(j-1)%26;
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
    return 0;
}