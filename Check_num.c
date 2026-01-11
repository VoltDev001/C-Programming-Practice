#include<stdio.h>
int main(){
char a;
printf("Please enter:");
scanf("%c",&a);
printf("%d\n",(a >= '0' && a <= '9'));
return 0;

}