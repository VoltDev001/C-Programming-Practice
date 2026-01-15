#include<stdio.h>

int main(){
    int sum = 0;
for(int i = 5; i <= 50; i++){
sum = sum + i;
}
printf("The sum of numbers 5 to 50 is : %d \n", sum);
return 0;
}