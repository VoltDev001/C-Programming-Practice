#include<stdio.h>
int main(){
    int i,j,n,k;
    char ch;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        k=1;
        for(j=1; j<=n-i; j++)
            printf("  ");
        for(j=1; j<=i; j++){
            if(i%2==0){
                ch='A'+(j-1)%26;
                printf("%2c  ",ch);
            }
            else{
                printf("%2d  ",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}