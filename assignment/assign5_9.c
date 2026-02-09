#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){  
            printf("%d ",(i+j+1)%2);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}