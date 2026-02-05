#include<stdio.h>
int main(){
    int n,i,j;
    char ch;
    printf("Enter number of rows(less than 27):\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch='A';
        for(j=1; j<=2*n-1; j++){
            if(j>=n+1-i && j<=n-1+i){
                printf("%2c",ch);
                if(j<n)
                    ch++;
                else
                    ch--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}