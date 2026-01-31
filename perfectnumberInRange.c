#include<stdio.h>
int findsum(int n);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int sum=findsum(i);
        if(sum==i){
        printf("%d is a perfect number.\n",i);
        }
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