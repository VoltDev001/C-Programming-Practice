#include<stdio.h>
int main(){
    int n,i,j,k=0;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(n%2==0){
            if(i<=n/2)
            k++;
            else if(i==n/2+1)
            k;
            else
            k--;
        }
        else{
            if(i<=(n+1)/2)
            k++;
            else
            k--;
        }
        for(j=1; j<=(n+1)/2; j++){
            if(j<=k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}