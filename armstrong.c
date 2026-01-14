#include<stdio.h>
#include<math.h>
int main(){
    int n,ndigit=0,power,lpower=0;
    int initialn;
    int numb_digit(int n, int ndigit);
    printf("Enter a number : \n");
    scanf("%d",&n);
    initialn=n;
    ndigit=numb_digit(n,ndigit);
    while(n != 0){
        power=round(pow((n%10),ndigit));
        printf("%d+",power);
        lpower+=power;
        n=n/10;
    }
    printf("=%d.\n",lpower);
    printf("The sum of the digits raised to the number of digits = %d.\n",lpower);
    if(lpower == initialn){
        printf("%d is an armstrong number.\n",initialn);
    }
    else{
        printf("%d is not an armstrong number.\n",initialn);
    }
    return 0;
}
int numb_digit(int n, int ndigit){ 
    while(n != 0){
        ndigit++;
        n/=10;
    }
    return ndigit;}