#include<stdio.h>
int main(){
    int n,i,j,mid,k;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    for(i=1; i<=3*n; i++){
        for(j=1; j<=2*n-1; j++){
            if(i<=n){
                if(j>=2*n-i)
                    printf("*");
                else
                printf(" ");
            }
            else if(i<=2*n){
                k=0;
                if(j==n){
                    printf("|");
                    k=1;
                }
                if(j>=i){
                    printf("*");
                    k=1;
                }
                if(j<=i-n-1){
                    printf("*");
                    k=1;
                }
                if(k==0){
                    printf(" ");
                }
            }
            else{
                if(j<=3*n+1-i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;  
}