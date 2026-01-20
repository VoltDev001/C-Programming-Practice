#include<stdio.h>
int main(){
    float price[4];
    printf("Enter price of 1st item : \n");
    scanf("%f",&price[0]);
    printf("Enter price of 2nd item : \n");
    scanf("%f",&price[1]);
    printf("Enter price of 3rd item : \n");
    scanf("%f",&price[2]);
    price[3]=0;
    printf("Final cost of 1st item = %.2f \n",price[0]+((price[0]*18.0)/100));
    printf("Final cost of 2nd item = %.2f \n",price[1]+((price[1]*18.0)/100));
    printf("Final cost of 3rd item = %.2f\n",price[2]+((price[2]*18.0)/100));
    float *ptr=&price[0];
    for(int i=1; i<=4; i++){
        printf("Address of %d item = %p\n", i, ptr);
        ptr++;
    }
    return 0;
}