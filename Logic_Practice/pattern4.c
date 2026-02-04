#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    k=n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j<=k){
                printf("%2d",k-j);
            }
            else
            printf("  ");
        }
        printf("\n");
        k--;
    }
    return 0;
}