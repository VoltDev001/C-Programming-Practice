#include<stdio.h>
void calculation(int a, int b, int *sum, int *product, int *avg);
int main(){
    int a=45, b=18;
    int sum,product,avg;
    calculation(a,b,&sum,&product,&avg);
    printf("Sum = %d\n",sum);
    printf("Product = %d\n",product);
    printf("Average = %d\n",avg);
    return 0;
}
void calculation(int a, int b, int *sum, int *product, int *avg){
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
}