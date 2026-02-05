#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=2*n; j++){
            if(j>=n+1-i && j<=2*n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}