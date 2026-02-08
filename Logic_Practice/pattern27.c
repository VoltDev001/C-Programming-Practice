#include<stdio.h>
int main(){
    int i,j,n,l;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
            printf("  ");
        l=i;
        for(j=1; j<=2*i-1; j++){
            printf("%2d",l);
            if(j<i)
                l--;
            else
                l++;
        }
        printf("\n");
    }
    return 0;
}