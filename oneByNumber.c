#include<stdio.h>
int main(){
int n;
float sum=0;
printf("Enter a number:\n");
scanf("%d",&n);
for(int i=1; i<=n ; i++){
sum+=(1.0/i);
printf("%f+",(1.0/i));
}
printf("\nSum = %f",sum);
return 0;
}