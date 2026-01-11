#include<stdio.h>
int sumOfn(int n, int sum);
int main(){
int n,sum=0,totalSum;
printf("Enter a number : ");
scanf("%d",&n);
totalSum=sumOfn(n,sum);
printf("The sum of %d numbers is = %d.\n",n,totalSum);
return 0;
}
int sumOfn(int n, int sum){
    if(n == 0)
    {
        return sum;
    }
    sum+=n;
    return sumOfn(n-1,sum);
}
