#include<stdio.h>
void AreaSquare(int s);
void AreaCircle(int r);
void AreaRectangle(int l, int b);
int main()
{
    int side,radius,length,breadth;
    printf("Enter the side of square : ");
    scanf("%d",&side);
    printf("Enter the radius of circle : ");
    scanf("%d",&radius);
    printf("Enter the length and breadth of rectangle : ");
    scanf("%d%d",&length,&breadth);
    AreaSquare(side);
    AreaCircle(radius);
    AreaRectangle(length,breadth);
    return 0;
}
void AreaSquare(int s)
{
    printf("Area of Square = %.2f.\n",(float)(s*s));
}
void AreaCircle(int r)
{
    printf("Area of Circle = %.2f.\n",3.14*r*r);
}
void AreaRectangle(int l, int b)
{
    printf("Area of Rectangle = %.2f.\n",(float)(l*b));
}