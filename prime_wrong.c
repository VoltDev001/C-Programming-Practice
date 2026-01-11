#include<stdio.h>
int main(){
int n,isPrime=1;
printf("Enter a number : ");
scanf("%d", &n);
if(n <= 0){
printf("Please enter a positive number.\n");
}
else if(n == 1 ){
    printf("%d is neither prime nor composite number.\n",n);
}
else {
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime=0;
            break;
        }
        else{
            isPrime=1;
            break;
        }
    }
}
if(isPrime == 1){
    printf("%d is a prime number.\n",n);}
    else{
    printf("%d is a composite number.\n",n);}
return 0;
}