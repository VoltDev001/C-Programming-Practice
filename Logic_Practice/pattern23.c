#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        k=1;
        for(j=1; j<=n; j++){
            if(j<=i){
                printf("%2d",k);
                if(j%2!=0)
                    k--;
                else
                    k++;
            }
        }
        printf("\n");
    }
    return 0;
}