#include<stdio.h>
int findsum(int n);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int sum=findsum(n);
    if(sum==n){
        printf("The number is a perfect number.\n");
    }
    else{
        printf("The number is not a perfect number.\n");
    }
    return 0;
}
int findsum(int n){
    int sum=0;
        for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}