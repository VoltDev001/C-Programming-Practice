# include<stdio.h>
int main(){
float cel;
printf("Enter the Celsius value ");
scanf("%f",&cel);
printf("The Fahrenheit value is:%.2f\n", cel * 9.0 / 5.0 +32);
return 0;
}