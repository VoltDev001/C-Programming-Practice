#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,r1,r2;
    printf("Enter the values of a, b and c as in the quadratic equation- ax^2+ bx + c : \n");
    scanf("%d%d%d",&a,&b,&c);
    d = pow(b,2)-4*a*c;
    if(d > 0){
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("The value of discriminant = %.2f.\n",sqrt(d));
        printf("The first root of the given quadratic equation = %.2f.\n",r1);
        printf("The second root of the given quadratic equation = %.2f.\n",r2); 
    }
    else if(d == 0){
        r1 = (-b)/(2*a);
        r2 = (-b)/(2*a);
        printf("The value of discriminant = 0.\n");
        printf("The first root of the given quadratic equation = %.2f.\n",r1);
        printf("The second root of the given quadratic equation = %.2f.\n",r2); 
    }
    else{
        d = -d;
        printf("The value of discriminant = -%.2f.\n",sqrt(d));
        printf("The roots of the given equation are complex as value of discriminant is less than 0.\n");
    }
    return 0;
}