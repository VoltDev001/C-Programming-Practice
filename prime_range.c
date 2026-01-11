#include<stdio.h>
int main(){
int n,n2,isPrime=1;
printf("Enter number range(where to where): ");
scanf("%d%d", &n,&n2);
for(n ; n<=n2;n++){
    if(n == 1){printf("1 is neither prime nor composite.\n");}
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime=0;
            break;
        }
    }
if(isPrime == 1){
    printf("%d is a prime number.\n",n);}
    else{
    printf("%d is a composite number.\n",n);}
    isPrime=1;
}
return 0;
}