# include<stdio.h>

int main(){
float side1 , side2;
printf("Enter side 1 : ");
scanf("%f", &side1);
printf("Enter side 2 : ");
scanf("%f", &side2);
float area = 2 * side1 * side2 ;
printf("Area of rectangle : %f", area);
return 0;

}