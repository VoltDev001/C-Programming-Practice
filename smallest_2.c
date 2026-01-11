#include<stdio.h>
int main(){
int a,b;
printf("Enter a number:");
scanf("%d", &a);
printf("Enter another number:");
scanf("%d", &b);
printf("(a is greater than or equal to b if 1 comes and otherwise if 0 comes) \n%d\n", (a >= b));
return 0;
}