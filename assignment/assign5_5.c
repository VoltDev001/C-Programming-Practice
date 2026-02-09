#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    i=n;
    while(i>=1){
        j=n;
        while(j>=i){
            printf("%d ",j);
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}