#include<stdio.h>
int main(){
    int n,i,j,k;
    char ch;
    printf("Enter number of rows(less than 27):\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch='A',k=1;
        for(j=1; j<=2*n-1; j++){
            if(j>=n+1-i && j<=n-1+i){
                if(j<=n){
                    printf("%2d",k);
                    k++;
                }
                else{
                    printf("%2c",ch);
                    ch++;
                }
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}