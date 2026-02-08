#include<stdio.h>
int main(){
    int i,j,n,k=1;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
       if(i%2==0){
        k+=i-1;
        for(j=1; j<=2*i-1; j++){
            if(j%2==0)
                printf("*");
            else{
                printf("%d",k);
                k--;
            }
        }
        k+=i+1;
       }
       else{
        for(j=1; j<=2*i-1; j++){
            if(j%2==0)
                printf("*");
            else{
                printf("%d",k);
                k++;
            }
        }
       }
        printf("\n");
    }
    return 0;
}