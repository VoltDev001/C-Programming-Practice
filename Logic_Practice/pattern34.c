#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    i=n;
    while(i>=1){
        j=1;
        while(j<=i){
            printf(" ");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}