#include<stdio.h>
int main() {
    float radius,dia,area,circum;
    printf("Enter the radius in centimeters:\n");
    scanf("%f",&radius);
    dia=radius/2.0;
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    printf("The diameter of circle with radius %.2fcm = %.2fcm.\n",radius,dia);
    printf("The area of circle with radius %.2fcm = %.2fsq.cm.\n",radius,area);
    printf("The circumference of circle with radius %.2fcm = %.2fcm.\n",radius,circum);
    return 0;
}