#include<stdio.h>
#include<math.h>
int main() {
    float p,r,t,n,SI,cI;
    printf("Enter principal amount, rate of interest, time(no. of years) and n: ");
    scanf("%f%f%f%f", &p,&r,&t,&n);
    SI = (p*r*t)/100;
    float rt= n*t;
    float rn= 1.0+(r/n);
    cI = p* (pow(rn,rt));
    printf("The Simple Interest = %f",SI);
    printf("The Compound Interest = %f",cI);
    return 0;
}