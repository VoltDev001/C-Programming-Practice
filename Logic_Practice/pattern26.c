#include<stdio.h>
int main(){
    int i,j,n;
    char ch;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        ch='A'+((i-1)%26);
        for(j=1; j<=i; j++){
            printf("%c ",ch);
            if(ch!='A')
                ch--;
            else
                ch='Z';
        }
        printf("\n");
    }
    return 0;
}