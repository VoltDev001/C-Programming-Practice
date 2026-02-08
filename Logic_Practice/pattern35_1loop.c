#include<stdio.h>
int main(){
    int i,n,k,flag=1;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1,k=0; i<=2*n-1; i++){
        if(i<n-k)
            printf(" ");
        if(i>=n-k && i<=n+k){
            if(flag)
                printf("*");
            else
                printf(" ");
            flag=1-flag;
        }
        if(i==2*n-1)
            break;
        if(i==n+k){
            k++;
            printf("\n");
            i=0;
            flag=1;
        }
    }
    return 0;
}