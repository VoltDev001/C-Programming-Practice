#include<stdio.h>
//  Floyd's triangle
int main(){
    int column,numb=0;
    printf("Enter a number : \n");
    scanf("%d",&column);
    printf("The number triangle with %d columns is as below : \n",column);
    for(int i=1; i<=column; i++){
        for(int j=1; j<=i; j++){
            numb++;
            printf("%d ",numb);
        }
        printf("\n");
    }
    return 0;
}