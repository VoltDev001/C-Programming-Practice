#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==j)
                printf("\\");
            else if(j==n+1-i && j!=i)
                printf("/");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}