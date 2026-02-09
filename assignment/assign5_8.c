#include<stdio.h>
int main(){
    int i, j, n, k=0;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            printf("%d ",k);
            j++;
        }
        k=1-k;
        printf("\n");
        i++;
    }
    return 0;
}