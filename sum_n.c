#include<stdio.h>
int main(){
int n;
printf("Please enter a number : ");
scanf("%d", &n);
int sum=0;
for(int i=1; i<=n; i++){
    sum = sum + i;
}
printf("The sum of n natural numbers is : %d \n", sum);
for(int i=n; i>=1; i--){
    printf("%d\n", i);
}

return 0;
}