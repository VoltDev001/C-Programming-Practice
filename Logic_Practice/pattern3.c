#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        k=i;
        for(j=1; j<=2*n-1; j++){
            if(j>=n+1-i && j<=n-1+i){
                printf("%3d",k);
                if(j<n)
                k++;
                else
                k--;
            }
            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}