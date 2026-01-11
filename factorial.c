#include<stdio.h>
int main(){
int n;
printf("Enter a number whose factorial is to be known : ");
scanf("%d", &n);
 if(n < 0){
    printf("Please enter a valid number.\n");
    return 1;
}

int fact = 1;
for(int i=1; i <= n; i++){
fact = fact * i;
}
printf("%d \n", fact);
    return 0;
}