#include<stdio.h>
int main(){
    int n,i,j,k=0;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=2*n-1; j++){
            if(j>=i && j<=2*n-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}