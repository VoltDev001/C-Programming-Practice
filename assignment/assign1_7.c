#include<stdio.h>
int main() {
    float angle,angle1,angle2;
    printf("Enter two angles of the triangle : \n");
    scanf("%f%f",&angle1,&angle2);
    angle = 180-angle1-angle2;
    printf("The third angle of the given triangle = %.2f.\n",angle);
    return 0;
}