#include<stdio.h>
int main(){
    int i,j,n,k=1,step,value;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
       if(i%2==0){
        value=k+i-1;
        step=-1;
       }
       else{
        value=k;
        step=1;
       }
       for(j=1; j<=2*i-1; j++){
            if(j%2==0)
                printf("*");
            else{
                printf("%d",value);
                value+=step;
            }
        }
        k+=i;
        printf("\n");
    }
    return 0;
}