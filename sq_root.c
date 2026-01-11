#include<stdio.h>
#include<math.h>
float sqrtn(float n);
int main(){
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    printf("%.2f",sqrtn(n));
    return 0;
}
float sqrtn(float n){
    return pow(n,1.0/2.0);
}