#include<stdio.h>
int main(){
    int i,j,n,count=0,ch,temp;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
            printf("  ");
            count+=i;
            temp=count;
        for(j=1; j<=i; j++){
            ch='A'+((temp-1)%26);
            printf("%c ",ch);
            temp--;
        }
        printf("\n");
    }
    return 0;
}