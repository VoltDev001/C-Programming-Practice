#include<stdio.h>
int main(){
int number;
printf("Enter a number :\n");
if(scanf("%d", &number) == 0){
    printf("The input is invalid.\n");
}
else{
    
    if (number > 0 )
{
    printf("The number is a natural number.\n");
}
else{
    printf("It is not a natural number.\n");
}
}

return 0;
}